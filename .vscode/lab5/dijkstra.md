### README

### Dijkstra's Algorithm Implementation

This repository contains a C++ implementation of Dijkstra's algorithm for finding the shortest path from a source vertex to all other vertices in a weighted graph.

### Description

The program implements Dijkstra's algorithm to find the shortest path from a given source vertex to all other vertices in a weighted graph. It calculates the minimum distance for each vertex from the source using a priority queue. The algorithm iteratively selects the vertex with the minimum distance from the set of vertices not yet included in the shortest path tree (Tset) and updates the distances of its adjacent vertices if a shorter path is found.

### Code Breakdown

- **minimumDist()**: Finds the vertex with the minimum distance from the source vertex among the vertices not yet included in the shortest path tree (Tset).
- **Dijkstra()**: Implements Dijkstra's algorithm to calculate the shortest path from a given source vertex to all other vertices in the graph.
- **main()**: Initializes the weighted graph and calls the Dijkstra() function with the source vertex.

### Algorithm

1. Initialize an array `dist[]` to store the minimum distance from the source vertex to each vertex and a boolean array `Tset[]` to mark visited/unvisited vertices.
2. Set the distance of the source vertex to 0 and all other vertices to infinity.
3. Iterate through all vertices and select the vertex with the minimum distance from the source among the unvisited vertices.
4. Update the distances of the adjacent vertices if a shorter path is found.
5. Repeat the process until all vertices are visited.
6. Output the minimum distance of each vertex from the source vertex.

### Usage

To compile and run the program:
```bash
g++ dijkstra.cpp -o dijkstra
./dijkstra
```

### Repository Structure

- **dijkstra.cpp**: Contains the C++ implementation of Dijkstra's algorithm for finding the shortest path in a weighted graph.
- **README.md**: This file, providing an overview of the repository and its contents.

### Contributions

Contributions are welcome. Feel free to fork the repository, make changes, and submit pull requests.
