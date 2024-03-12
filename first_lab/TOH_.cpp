#include<iostream>
#include<time.h>
#include<cstdlib>
#include<vector>
#include<fstream>
using namespace std;

vector<int> a;
clock_t start,e;
int sum_of_n =0;
ofstream outputfile("data1.txt");

void PlotChart() {
    FILE *gnuplotPipe = _popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot 'data.txt' with linespoints title 'Average Time'\n");
        _pclose(gnuplotPipe);
    } else {
        cerr << "Gnuplot not found. Please install Gnuplot." << endl;
    }
}


void Towers_of_hanoi(int disks, int s ,int h ,int d){
  if(disks >0){
  Towers_of_hanoi(disks-1,s,d,h);
//   cout<<"move disk from "<<s<<" to "<<d<<endl;
  Towers_of_hanoi(disks-1,h,s,d);}
}


// cout<<"exit of ssort"<<endl;

void generat_e(int i){
 for (int j = 0; j < i; j++)
 {
     a.push_back(rand());
 }
//  cout<<" exit of generate" <<endl;
}

void avg_time(){
    cout<<"start"<<endl;
for (int i = 1000; i <= 10000; i=i+500)
{
    // cout<<"enter to generate"<<endl;
     generat_e(i);
     start = clock();
     for (int k = 0; k < 10; k++)
     {
    //   ssort(a,i);
     // sum_of_n_numbers(a,i);
     Towers_of_hanoi(i,1,2,3);
     }
     // here we are getting ticks per sec.
     e= clock();
    // to get time in second.
     double t_in_sec = double(e- start )/double( CLOCKS_PER_SEC);
     double Avg_time = double(t_in_sec/10) ;
      outputfile<<i<<" "<<Avg_time<<endl;
      cout<<"pls wait"<<endl;
}
 PlotChart();
}
int main(){
    avg_time();
    cout<<"check Data.txt file";
    return 0;
}