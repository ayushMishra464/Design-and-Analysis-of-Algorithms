
#include <iostream>
using namespace std;

void Towers_of_hanoi(int disks, int s ,int h ,int d){
  if(disks >0){
  Towers_of_hanoi(disks-1,s,d,h);
  cout<<"move disk from "<<s<<" to "<<d<<endl;
  Towers_of_hanoi(disks-1,h,s,d);}
}

int main(){
     char S,H,D;
     Towers_of_hanoi (3,1,2,3);
     return 0;
}

