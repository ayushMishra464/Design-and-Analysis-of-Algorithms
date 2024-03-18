#include <iostream>
using namespace std;
#define n 3

int min(int a, int b)
{ 
	return a < b ? a : b; 
} 

int assembly(int a[][n],int t[][n], int *e, int *x) 
{ 
	int T1[n], T2[n], i; 

	// adding base case times
	T1[0] = e[0] + a[0][0]; 
	T2[0] = e[1] + a[1][0]; 

	// Filling the dp tables T1[] and T2[] using recursive relations
	for (i = 1; i < n; i++) 
	{ 
		T1[i] = min(T1[i - 1] + a[0][i], T2[i - 1] + t[1][i] + a[0][i]); 
		T2[i] = min(T2[i - 1] + a[1][i], T1[i - 1] + t[0][i] + a[1][i]); 
	} 

	// finding final times and returning the minimum value 
	return min(T1[n - 1] + x[0], T2[n - 1] + x[1]); 
} 

// Driver Code
int main() 
{ 
	int a[][n] = {{5, 4, 3}, {2, 3, 7}}; 
	int t[][n] = {{0, 2, 2}, {0, 1, 1}}; 
	int e[] = {3, 2}, x[] = {3, 4}; 

	cout<<"The minimum time taken is: "<<assembly(a, t, e, x); 

	return 0; 
} 
