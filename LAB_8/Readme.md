## Program 1: Longest Common Subsequence:

__Aim:__

To find the longest common subsequence between two strings using dynamic programming.

__Algorithm:__

The program implements the Longest Common Subsequence (LCS) problem using dynamic programming. It calculates the length of the LCS between two given strings and prints the LCS along with arrows indicating the matching characters. The main function initializes example strings, calls the LCS function, and prints the length of the LCS.

__Time Complexity:__

Time-complexity is O (m*n). m and n are the lengths of the input strings.

## Program 2: Merge Purge:

__Aim:__

The aim of this algorithm is to merge two sets of pairs while ensuring that only non-dominated pairs are included in the final merged set. Dominated pairs, which are pairs with lower profit and higher weight compared to other pairs, are eliminated from the final set.

__Algorithm:__

1. Input: Two sets of pairs, S1 and S2, each consisting of pairs (profit, weight).
2. Initialize an empty vector final to store the merged and purged pairs.
3. For each pair (profit1, weight1) in S1, iterate through all pairs (profit2, weight2) in S2.
   - Check if (profit1, weight1) dominates (profit2, weight2) by having greater profit and lesser weight.
   - If dominated, skip adding (profit1, weight1) to the final vector.
4. Repeat the same process for pairs in S2.
5. Add pairs that are not dominated by any other pair to the final vector.
6. Output the final vector containing non-dominated pairs.

__Time Complexity:__

Let n be the total number of pairs in both S1 and S2.

- Step 3 and 4: These steps involve nested loops iterating over all pairs in S1 and S2. So, the time complexity for these steps is O(n^2).
- Step 5: In the worst-case scenario, all pairs are non-dominated, so this step has a time complexity of O(n).
- Step 6: Printing the final vector has a time complexity of O(n).




Certainly! Here's the updated README file with information about the time complexity of the algorithm:

---

# Knapsack Problem Using Merge-Purge Algorithm

## Overview

This repository contains a C++ implementation of the knapsack problem using the merge-purge algorithm to remove duplicate items from the input list. The knapsack problem is a classic optimization problem that involves selecting a subset of items with maximum value without exceeding a given weight capacity.

## Algorithm

The merge-purge algorithm is used to remove duplicates from the input list of items before solving the knapsack problem. It iterates through the items list and checks for duplicates based on their weight and value. If a duplicate item is found, it is removed from the list.

## Input Format

The input to the program consists of a list of items, each represented by a pair of integers: weight and value. These items are defined in the `items` vector in the `main` function of the `knapsack.cpp` file.

## Output

The program outputs the maximum value that can be obtained from the knapsack problem after removing duplicates using the merge-purge algorithm.

## Time Complexity

The time complexity of the merge-purge algorithm used to remove duplicates from the input list of items is O(n^2), where n is the number of items in the list. The time complexity of the dynamic programming solution for the knapsack problem is O(n * capacity), where n is the number of items and capacity is the maximum weight capacity of the knapsack.

## Example

Suppose we have the following list of items:

```
Item(2, 10), Item(3, 15), Item(5, 30), Item(7, 35), Item(3, 15)
```

After removing duplicates using the merge-purge algorithm, the list becomes:

```
Item(2, 10), Item(3, 15), Item(5, 30), Item(7, 35)
```

Then, the program calculates and outputs the maximum value that can be obtained from these items.
