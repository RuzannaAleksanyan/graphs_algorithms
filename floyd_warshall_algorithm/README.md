# Floyd-Warshall Algorithm
This repository contains a C++ implementation of the Floyd-Warshall algorithm for finding the shortest paths in a weighted graph. The algorithm works for both directed and undirected graphs and can handle graphs with negative edge weights (but no negative cycles).
## Usage
To use the Floyd-Warshall algorithm in your project:
1. Include the `floyd_warshall.h` header file in your source code.
2. Define your graph as a 2D vector of integers, where `graph[i][j]` represents the weight of the edge from vertex `i` to vertex `j`. Use `INF` (defined as 99999 in the example) to represent infinite distances or absence of a direct edge.
3. Call the `floyd_warshall` function, passing the graph as a parameter.
4. Optionally, call the `print_solution` function to display the resulting matrix of shortest distances between every pair of vertices.
## Compilation
Compile your C++ program using your preferred compiler. For example, using g++:
```bash
g++ test.cpp -o test
```
## Run the executable:

```bash
./test
```
