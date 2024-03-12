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

void sum_of_n_numbers(vector<int> &vect, int n){
    for (int i = 0; i <= n; i++)
    {
     sum_of_n += vect[i];  
    }
}


void generat_e(int i){
 for (int j = 0; j < i; j++)
 {
     a.push_back(rand());
 }
//  cout<<" exit of generate" <<endl;
}

void avg_time(){
    cout<<"start"<<endl;
for (int i = 10000; i <= 1000000; i=i+20000)
{
    // cout<<"enter to generate"<<endl;
     generat_e(i);
     start = clock();
     for (int k = 0; k < 10; k++)
     {
  
     sum_of_n_numbers(a,i);
     }
    
     e= clock();
    
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