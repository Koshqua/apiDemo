#!/bin/bash
FROM golang:latest 
WORKDIR /server
COPY go.mod go.sum ./
RUN go mod download
COPY . .
RUN go build -o main.
EXPOSE 3000
RUN chmod +x main.sh
ENTRYPOINT ["./main.sh"]
CMD ["./server"]