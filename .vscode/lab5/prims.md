### README

### Prim's Algorithm Implementation

This repository contains a C++ implementation of Prim's algorithm for finding the minimum spanning tree (MST) of a weighted undirected graph.

### Description

The program implements Prim's algorithm to find the minimum spanning tree (MST) of a weighted undirected graph. Prim's algorithm is a greedy algorithm that starts with an arbitrary vertex and grows the spanning tree by selecting the shortest edge that connects a vertex in the tree to a vertex outside the tree. The algorithm continues until all vertices are included in the MST.

### Code Breakdown

- **graph**: A class template representing the graph data structure. It includes methods for adding edges, printing the graph, and finding the MST using Prim's algorithm.
- **adding_multiple_edges()**: A function to add multiple edges to the graph based on user input.
- **prims()**: The implementation of Prim's algorithm to find the minimum spanning tree (MST) of the graph.
- **main()**: Reads user input for the number of nodes, number of edges, and whether the graph is directed or undirected. It then creates the graph, adds edges, and finds the minimum spanning tree using Prim's algorithm.

### Algorithm

1. Initialize an array `near[]` to store the nearest neighbor of each vertex.
2. Start with an arbitrary vertex and select the shortest edge that connects it to a vertex outside the tree.
3. Add the selected edge to the MST and update the `near[]` array.
4. Repeat the process until all vertices are included in the MST.
5. Output the edges of the minimum spanning tree.

### Usage

To compile and run the program:

```bash
g++ prims.cpp -o prims
./prims
```

### Repository Structure

- **prims.cpp**: Contains the C++ implementation of Prim's algorithm for finding the minimum spanning tree (MST) of a weighted undirected graph.
- **README.md**: This file, providing an overview of the repository and its contents.

### Contributions

Contributions are welcome. Feel free to fork the repository, make changes, and submit pull requests.
