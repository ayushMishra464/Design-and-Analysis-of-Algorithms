#include<iostream>
using namespace std;

void Max_Min(int arr[], int low, int high, int &max, int &min) {
    if (high == low) {
        max = min = arr[low];
    }
        
     else {
        int mid = (low + high) / 2;
        int max1, min1;
        Max_Min(arr, low, mid, max, min);
        Max_Min(arr, mid + 1, high, max1, min1);

        if (max1 > max) {
            max = max1;
        }
        if (min1 < min) {
            min = min1;
        }
    }
}

int main() {
    int arr[9] = {12, 11, 13, 5, 6, 70,7,7,7};
    int max = 0, min = 0;
    Max_Min(arr, 0, 8, max, min);
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    return 0;
}
