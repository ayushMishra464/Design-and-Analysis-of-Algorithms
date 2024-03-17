### README

### Cycle Detection in Graph

This repository contains a C++ implementation of cycle detection in an undirected graph using the Union-Find algorithm.

### Description

The program detects cycles in an undirected graph by implementing the Union-Find algorithm. It creates a graph with a specified number of vertices and adds edges between vertices. Then, it checks for cycles in the graph using the Union-Find data structure.

### Code Breakdown

- **Graph Class**: Defines a Graph class that represents an undirected graph and provides methods for adding edges, checking for cycles, and performing union-find operations.
- **find()**: Finds the root of a given vertex in the Union-Find data structure.
- **unionSets()**: Performs a union operation on two sets represented by their root vertices.
- **isCyclic()**: Checks whether the graph contains a cycle by iterating through the edges and performing union operations.
- **addEdge()**: Adds an edge between two vertices in the graph.

### Algorithm

1. Create a graph with a specified number of vertices.
2. Add edges between vertices to form the graph.
3. Iterate through the edges and perform union operations using the Union-Find algorithm.
4. If a union operation connects two vertices that already share the same root, a cycle is detected.
5. Output whether the graph contains a cycle or not.

### Usage

To compile and run the program:
```bash
g++ cycle_detection.cpp -o cycle_detection
./cycle_detection
```

### Repository Structure

- **cycle_detection.cpp**: Contains the C++ implementation of cycle detection in an undirected graph using the Union-Find algorithm.
- **README.md**: This file, providing an overview of the repository and its contents.

### Contributions

Contributions are welcome. Feel free to fork the repository, make changes, and submit pull requests.
