#include<iostream>
using namespace std;
 
void pivot(int arr[],int s,int size){
     int c=0;
     for (int i = 1; i <size ; i++)
     {
          if (s>arr[i])
          {
               c++;
          }
     }
     swap(arr[0],arr[c]);
int i= 0 ;
int j = size-1;
while (i<c && j>c)
{
     while (arr[i]<s)
     {
          i++;
     }
      while (arr[j]>s)
     {
          j--;
     }
     if (i<j)
    {
     swap(arr[0], arr[j]);
     i++;
     j--;

    }
     
}
}

int main(){
   int size = 10;
   int s=6;
   int arr[10]= {6,2,4,5,1,7,8,9,10,11};
   pivot(arr,s,size);
   for (int i = 0; i < 10; i++)
   {
     cout<<arr[i]<<" ";
   }
    return 0;

}