# Permutation Generator

## Introduction
This C++ program generates all permutations of a given set of characters using a recursive approach. It measures the average time taken to generate these permutations for different sizes of the input set and visualizes the data using Desmos graphing calculator.

## Code Explanation
- The program defines a recursive function `PG` to generate all permutations of a given set of characters.
- The `char_generator` function generates characters for the input set.
- The main function `main` measures the average time taken to generate permutations for different sizes of the input set and writes the data to a file named `permutation_generation_result.txt`.

## Algorithm
The algorithm generates all permutations of a given set of characters by recursively swapping characters in the input set. It starts with the first character fixed and recursively generates permutations for the remaining characters.

## Complexity
The time complexity of this algorithm is O(n!), where n is the size of the input set. This is because there are n! permutations of n distinct elements, and the algorithm generates all of them.

## Graph Analysis
The program generates a graph showing the average time taken to generate permutations for different sizes of the input set. As the size of the input set increases, the time taken also increases exponentially. This is reflected in the plotted graph.
![image](https://github.com/ayushMishra464/Design-and-Analysis-of-Algorithms/assets/158063230/50da3976-4d45-4400-8f27-18d02cba9790)

## Usage
1. **Compile the program**: Use any C++ compiler to compile the program.
    ```
    g++ permutation_generator.cpp -o permutation_generator
    ```

2. **Run the executable**: Execute the compiled program.
    ```
    ./permutation_generator
    ```

3. **View the results**: After execution, the program generates a file named `permutation_generation_result.txt` containing the data. You can plot this data using Desmos graphing calculator or any other graphing tool.

## Files
- `permutation_generator.cpp`: Contains the C++ source code.
- `permutation_generation_result.txt`: Generated data file containing the sizes of input sets and their corresponding average times.
- `README.md`: This file, providing instructions and information about the program.

## Requirements
- C++ compiler

## Notes
- Adjust the loop parameters in the main function for different sizes of input sets.
- Plot the data using Desmos graphing calculator or any other graphing tool.

## License
This project is licensed under the [MIT License](LICENSE).
