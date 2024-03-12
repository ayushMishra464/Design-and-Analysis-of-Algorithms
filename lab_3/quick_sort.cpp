#include<iostream>
using namespace std;

int partion(int arr[],int s,int e){
     int pivot=arr[s];

     int count=0;
     for(int i=s+1;i<=e;i++){         //take care of i=s+1 here
         if(arr[i]<=pivot){
          count++;
         }
         }
         int par=s+count; // take care to make s+count
     swap(arr[par],arr[s]);
     
     int i=s;
   int j=e;
     while (i<par && j>par)
     {
          while(arr[i]<arr[par]){
               i++;
          }
          while(arr[j]>arr[par]){
               j--;
          }
          if(i<par && j>par){
               swap(arr[i++],arr[j++]);
          }
     }
     return par;
     
}
void quick_srt(int arr[],int s,int e){
     if(s>=e){
          return;}
          
     
     int p=partion(arr,s,e);
 
     quick_srt(arr,s,p-1);
     
     quick_srt(arr,p+1,e);
     
}
int main(){
     int arr[5]={1,4,3,5,2};
     int n=5;
     quick_srt(arr,0,n-1);

     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}