package main

import (
	"encoding/json"
	"fmt"
	"io"
	"io/ioutil"
	"log"
	"net/http"
	"strings"
)

//Port ...
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

//Ports ...
var Ports = make(map[string]Port)

//Handler ...
func Handler(wr http.ResponseWriter, req *http.Request) {
	body, err := ioutil.ReadAll(req.Body)
	if err != nil {
		log.Fatal(err)
	}

	dec := json.NewDecoder(strings.NewReader(string(body)))
	for {

		_, err := dec.Token()
		if err == io.EOF {
			break
		}
		if err != nil {
			log.Fatal(err)
		}

		if dec.More() {
			var Port Port
			dec.Decode(&Port)
			fmt.Fprintf(wr, "%T,%v\n", Port, Port)
			if len(Port.Unlocs) > 0 {
				Ports[Port.Unlocs[0]] = Port
			}

		}
		//fmt.Printf("%v", Ports)
	}

}
func main() {

	http.HandleFunc("/ports", Handler)
	http.ListenAndServe(":3000", nil)
}
