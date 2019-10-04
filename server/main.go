package main

import (
	"context"
	"encoding/json"
	"fmt"
	"net"
	"strings"

	"github.com/koshqua/apiDemo/server/proto"
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

//function writes a new port to Port map
func (s *server) Write(ctx context.Context, request *proto.Request) (*proto.Response, error) {
	port := request.GetPort()
	var Port Port
	dec := json.NewDecoder(strings.NewReader((port)))
	dec.Decode(&Port)
	Ports[Port.Unlocs[0]] = Port
	return &proto.Response{Port: port}, nil
}

//function returns particular port by Unlocs values
func (s *server) Get(ctx context.Context, request *proto.Request) (*proto.Response, error) {
	port := request.GetPort()
	fmt.Println(port)
	prt := Ports[port]
	fmt.Println(prt)
	p, err := json.Marshal(prt)
	if err != nil {
		panic(err)
	}
	return &proto.Response{Port: string(p)}, nil
}

func main() {

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
