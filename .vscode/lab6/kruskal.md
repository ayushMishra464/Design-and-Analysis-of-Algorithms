### README

### Kruskal's Algorithm Implementation

This repository contains a C++ implementation of Kruskal's algorithm to find the Minimum Spanning Tree (MST) of a graph.

### Description

Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a connected weighted graph. It builds the MST by adding the edges in increasing order of their weights while avoiding cycles. The algorithm maintains a disjoint set data structure to efficiently check for cycles and union vertices.

### Code Breakdown

- **kruskal**: A function that implements Kruskal's algorithm to find the Minimum Spanning Tree of a graph. It takes an array of edges, the number of vertices, and a 2D array to store the edges of the MST.
- **main**: The entry point of the program. It prompts the user to input the number of edges and the details of each edge (source, destination, weight). Then, it calls the `kruskal` function to find the MST and prints the chosen edges.

### Algorithm

1. Initialize a disjoint set data structure to keep track of connected components.
2. Sort the edges of the graph in non-decreasing order of their weights.
3. Iterate over the sorted edges and add each edge to the MST if it does not form a cycle with the already chosen edges.

### Usage

To compile and run the program:

```bash
g++ kruskal.cpp -o kruskal
./kruskal
```

Follow the on-screen instructions to input the number of edges and the details of each edge.

### Repository Structure

- **kruskal.cpp**: Contains the C++ implementation of Kruskal's algorithm to find the Minimum Spanning Tree of a graph.
- **README.md**: This file, providing an overview of the repository and its contents.

### Contributions

Contributions are welcome. Feel free to fork the repository, make changes, and submit pull requests.
