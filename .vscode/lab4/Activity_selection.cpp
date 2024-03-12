#include <bits/stdc++.h>
using namespace std;


void printMaxActivities(int start[], int finish[], int n)
{
	int i, j;

	cout << "Following activities are selected" << endl;

	// The first activity always gets selected
	i = 0;
	cout << i << " ";

	
	for (j = 1; j < n; j++) {
		
		if (start[j] >= finish[i]) {
			cout << j << " ";
			i = j;
		}
	}
}


int main()
{
	int start[] = { 8, 3, 0, 5, 8, 5 };
	int finish[] = { 4, 4, 6, 7, 9, 9 };
	int n = sizeof(start) / sizeof(start[0]);

	
	printMaxActivities(start, finish, n);
	return 0;
}

