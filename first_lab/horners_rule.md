
# Horner's Rule Implementation in C++

## Introduction
This program implements Horner's Rule, a method for evaluating polynomials, in C++. Horner's Rule allows efficient evaluation of polynomial functions by reducing the number of multiplications needed compared to the naive approach.

## Horner's Rule Implementation
### Algorithm
1. The `HornerRule` function recursively evaluates the polynomial using Horner's Rule.
2. It starts with the last coefficient of the polynomial and iteratively multiplies the result by the variable `x` and adds the next coefficient.
3. The process continues until all coefficients are processed.

### Time Complexity
- The time complexity of Horner's Rule is O(n), where n is the degree of the polynomial.
- This is because the algorithm performs a constant number of operations (addition and multiplication) for each coefficient.

## Code Breakdown
- The `Generate` function generates random integer values to populate an array representing the coefficients of a polynomial.
- The `Algorithm` function measures the average time taken to evaluate the polynomial using Horner's Rule for different sizes of the polynomial.
- The main function calls the `Algorithm` function to execute the time complexity analysis and writes the results to a file.
- The `PlotChart` function generates a plot of the data using Gnuplot to visualize the time complexity trend.

## Conclusion
Horner's Rule is a simple yet efficient method for evaluating polynomial functions. By reducing the number of multiplications needed, it offers improved performance compared to the naive approach of directly evaluating each term of the polynomial.


