### README

### Assembly Line Scheduling

This C++ program implements the Assembly Line Scheduling algorithm to find the minimum cost path in a manufacturing assembly line. It takes into account the processing times at each station, transfer times between stations, entry times for lines, and exit times for lines.

### Description

The Assembly Line Scheduling algorithm is used to optimize the production process in a manufacturing assembly line with multiple stations and transfer lines. It determines the sequence of stations to minimize the total time or cost required to complete the production.

### Code Breakdown

- **assemblyLineScheduling**: This function implements the Assembly Line Scheduling algorithm. It calculates the minimum cost and determines the optimal path through the assembly line.
- **printPath**: This function prints the optimal path determined by the Assembly Line Scheduling algorithm.
- **main**: The entry point of the program. It prompts the user to input the processing times, transfer times, entry times, and exit times for each station and line. Then, it calls the `assemblyLineScheduling` function to find the minimum cost and prints the optimal path.

### Input Format

- Processing times for stations: Enter the processing time for each station in each line.
- Transfer times between stations: Enter the transfer time between adjacent stations in each line.
- Entry times for lines: Enter the entry time for each line.
- Exit times for lines: Enter the exit time for each line.

### Output

- Minimum cost: The total minimum cost required to complete the production.
- Path: The optimal path through the assembly line, specifying the station number and line number.

### Usage

To compile and run the program:

```bash
g++ assembly_line_scheduling.cpp -o assembly_line_scheduling
./assembly_line_scheduling
```

Follow the on-screen instructions to input the required parameters.

### Repository Structure

- **assembly_line_scheduling.cpp**: Contains the C++ implementation of the Assembly Line Scheduling algorithm.
- **README.md**: This file, providing an overview of the program and its usage.

### Contributions

Contributions are welcome. Feel free to fork the repository, make changes, and submit pull requests.
