
# Matrix Multiplication

This repository contains a C++ code for performing matrix multiplication using arrays.

## Algorithm

The code implements matrix multiplication using arrays. The `matrixMultiply` function takes two input matrices `mat1` and `mat2`, along with their dimensions `m1 x n1` and `m2 x n2`, and computes their product. It first checks if the matrices are compatible for multiplication (i.e., the number of columns in `mat1` is equal to the number of rows in `mat2`). Then, it initializes the resulting matrix `result` with appropriate dimensions and performs the multiplication using nested loops. The `printMatrix` function is used to print the resulting matrix.

## Application

Matrix multiplication has numerous applications in various fields such as computer graphics, scientific computing, and machine learning. It is used in transformations, rotations, scaling, and other operations in computer graphics. In scientific computing, it is used in solving systems of linear equations and in numerical simulations. In machine learning, it is used in algorithms like neural networks and linear regression.

## Time Complexity

The time complexity of matrix multiplication using the naive approach implemented in this code is O(m1 * n1 * n2), where m1 is the number of rows in the first matrix, n1 is the number of columns in the first matrix (equal to the number of rows in the second matrix), and n2 is the number of columns in the second matrix.

