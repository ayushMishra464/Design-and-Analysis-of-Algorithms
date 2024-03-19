# Sum of N Numbers

## Introduction
This C++ program calculates the sum of N numbers and measures the average time taken for different values of N. It also generates a plot using Gnuplot to visualize the average time taken.

## Usage
1. **Compile the program**: Use any C++ compiler to compile the program.
    ```
    g++ sum_of_n.cpp -o sum_of_n
    ```

2. **Run the executable**: Execute the compiled program.
    ```
    ./sum_of_n
    ```

3. **View the results**: After execution, a chart will be displayed showing the average time taken for different values of N.

## Files
- `sum_of_n.cpp`: Contains the C++ source code.
- `data1.txt`: Generated data file containing values of N and their corresponding average times.
- `README.md`: This file, providing instructions and information about the program.

## Algorithm
The algorithm implemented in this program computes the sum of N numbers using a simple loop. It iterates through the array of numbers and accumulates their values to compute the sum.

## Complexity
The time complexity of this algorithm is O(N), where N is the number of elements in the array.
![image](https://github.com/ayushMishra464/Design-and-Analysis-of-Algorithms/assets/158063230/23d9cb53-7d97-40fe-ac20-cfd8c6f6985e)

## Graph Analysis
The program generates a graph showing the average time taken for different values of N. As N increases, the time taken to compute the sum also increases linearly.

## Notes
- Adjust the loop parameters in `avg_time()` function for different ranges of N.
- Modify the Gnuplot command in `PlotChart()` function if necessary for custom plotting.
- This program is for educational purposes and can be modified and extended for specific use cases.

## Requirements
- C++ compiler
- Gnuplot (for visualization)


