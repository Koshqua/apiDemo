package main

import (
	"encoding/json"
	"fmt"
	"io"
	"log"
	"net/http"
	"runtime"

	"github.com/gin-gonic/gin"
	"github.com/koshqua/apiDemo/client/proto"
	"google.golang.org/grpc"
)

type Port struct {
	Name        string    `json:"name"`
	City        string    `json:"city"`
	Regions     []string  `json:"regions",omitempty`
	Alias       []string  `json:"alias",omitempty`
	Coordinates []float64 `json:"coordinates"`
	Province    string    `json:"province"`
	Timezone    string    `json:"timezone"`
	Unlocs      []string  `json:"unlocs",omitempty`
	Code        int       `json:"code"`
}

func main() {
	conn, err := grpc.Dial("localhost:3000", grpc.WithInsecure())
	if err != nil {
		panic(err)
	}
	client := proto.NewWritringServiceClient(conn)
	g := gin.Default()

	//request to get a particular port by Unloc value
	g.GET("/ports/:id", func(ctx *gin.Context) {
		id := ctx.Param("id")
		req := &proto.Request{Port: id}
		if response, err := client.Get(ctx, req); err == nil {
			ctx.JSON(http.StatusOK, gin.H{
				"result": fmt.Sprint(response.Port),
			})
		}
	})

	//request to read a json file and send parts of data to server
	g.POST("/ports", func(ctx *gin.Context) {
		body := ctx.Request.Body
		dec := json.NewDecoder(body)
		for {

			_, err := dec.Token()
			if err == io.EOF {
				break
			}
			if err != nil {
				panic(err)
			}
			PrintMemUsage()
			if dec.More() {
				var Port Port
				PrintMemUsage()
				dec.Decode(&Port)
				if len(Port.Unlocs) > 0 {
					p, err := json.Marshal(Port)
					if err != nil {
						panic(err)
					}
					req := &proto.Request{Port: string(p)}

					if response, err := client.Write(ctx, req); err == nil {
						ctx.JSON(http.StatusOK, gin.H{
							"added": fmt.Sprint(response.Port),
						})
					} else {
						ctx.JSON(http.StatusInternalServerError, gin.H{"error": err.Error()})
					}
				}

			}

		}
	})
	if err := g.Run(":8080"); err != nil {
		log.Fatalf("Failed to run server %v", err)
	}
}

//Prints memory usage
func PrintMemUsage() {
	var m runtime.MemStats
	runtime.ReadMemStats(&m)
	fmt.Printf("Alloc = %v MiB", bToMb(m.Alloc))
	fmt.Printf("\tTotalAlloc = %v MiB", bToMb(m.TotalAlloc))
	fmt.Printf("\tSys = %v MiB", bToMb(m.Sys))
	fmt.Printf("\tNumGC = %v\n", m.NumGC)
}

func bToMb(b uint64) uint64 {
	return b / 1024 / 1024
}
