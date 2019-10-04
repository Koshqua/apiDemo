FROM golang:latest 
WORKDIR /client
COPY go.mod go.sum main.sh ./
RUN go mod download
COPY . .
RUN go build -o main.
EXPOSE 8080
CMD ["./client"]