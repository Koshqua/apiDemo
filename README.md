# Golang microservices assignment task

The app is made without any microservices framework. I only used gin for routing.
- App parses given grc spreaded to 1 mln strings with usage of ~68mb of os memory 
- There are two end points, one is for parsing json and adding to map
- Second endpoint is for retrieving data from the map. 
- Ofcourse, data in map is not persistent, so before getting any data from map, you need to write it first
- I provided a memory usage test, running the function which prints memory usage on every reading of json 

# Running services 
- Run  client/main.go
- Run server/main.go
Server will run or localhost:3000, client will run on localhost:8080

- To read a json, send a json POST request with any http-client(e.g Postman) to localhost:8080/ports

- To get a port, send a GET request to localhost:3000/ports/:id - where id is field Unlocs from json.




