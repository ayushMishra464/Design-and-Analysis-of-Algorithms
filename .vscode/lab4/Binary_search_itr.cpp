#include<iostream>
#include<algorithm>
using namespace std;

int Binary_recursive(int arr[], int key, int l, int h) {
    if (l <= h) {
        int mid = l + (h - l) / 2; // To avoid integer overflow
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            return Binary_recursive(arr, key, l, mid - 1);
        } else {
            return Binary_recursive(arr, key, mid + 1, h);
        }
    }
    return -1; // Key not found
}

int main() {
    int size = 10;
    int s = 6;
    int arr[10] = {6, 2, 4, 5, 1, 7, 8, 9, 10,5};
    std::sort(arr,arr+9);
    cout << Binary_recursive(arr, 9, 0, 9);
    return 0;
}

