package main

import (
	"context"
	"encoding/json"
	"net"
	"runtime"
	"strings"

	"github.com/koshqua/apiDemo/proto"
	"google.golang.org/grpc"
	"google.golang.org/grpc/reflection"
)

type server struct{}
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

var Ports = make(map[string]Port)

func (s *server) Write(ctx context.Context, request *proto.Request) (*proto.Response, error) {
	port := request.GetPort()
	var Port Port
	dec := json.NewDecoder(strings.NewReader((port)))
	dec.Decode(&Port)
	Ports[Port.Unlocs[0]] = Port
	return &proto.Response{Port: port}, nil
}
func main() {
	runtime.GOMAXPROCS(10)
	listener, err := net.Listen("tcp", ":3000")
	if err != nil {
		panic(err)
	}
	srv := grpc.NewServer()
	proto.RegisterWritringServiceServer(srv, &server{})
	reflection.Register(srv)
	if e := srv.Serve(listener); e != nil {
		panic(err)
	}
}
