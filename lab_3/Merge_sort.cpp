#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;


    int L[n1], R[n2];

   
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    
    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

     
     while (j < n2) {
         arr[k] = R[j];
         j++;
         k++;
     }
}

void mergeSort(int arr[], int low, int high) {
   if (low < high) {
       int mid = low + (high - low) / 2;

       mergeSort(arr, low, mid);
       mergeSort(arr, mid + 1, high);

       merge(arr, low, mid, high);
   }
}

int main() {
    int arr[] = {10, 14, 18, 19, 0, 3, 4, 5, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}