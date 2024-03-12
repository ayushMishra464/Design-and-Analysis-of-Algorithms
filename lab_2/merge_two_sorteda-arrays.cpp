#include<iostream>
using namespace std;

void sort_array(int arr[],int lowa, int j,int k,int higha,int s){
     int arr1[s];
     int i = 0;
     while ((lowa <= j) && (k<=higha))
     {
          if (arr[lowa]<=arr[k])
          {
               arr1[i]=arr[lowa];
               // cout<<arr1[i]<<" ";
               lowa++;
          }
          else if (arr[k]<=arr[lowa])
          {
               arr1[i]=arr[k];
               // cout<<arr1[i]<<" ";
               k++;
          }
          i++;}

         
              while (lowa <= j) {
        arr1[i++] = arr[lowa++];
     //    cout<<arr1[i]<<" ";
    }

    // Copy remaining elements from second half if any
    while (k <= higha) {
        arr1[i++] = arr[k++];
     //    cout<<arr1[i]<<" ";
    }
                
     for (int i = 0; i < s; i++)
     {
          arr[i]=arr1[i];
     }
      
     
}  

int main(){
     int s =10;
     int arr[10]={10,14,18,19,0,3,4,5,6,7};
     sort_array(arr,0,3,4,9,s);

     for (int i = 0; i < 10; i++)
     {
          cout<<arr[i]<<" ";
     }
     

     return 0;
     }