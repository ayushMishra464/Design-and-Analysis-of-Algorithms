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


void True_False_fun(int n, string s){
     if(n== 0){
          cout<<s<<" ";
          cout<<endl;
          return;
     }
    True_False_fun(n-1,s+'T');
    True_False_fun(n-1,s+'f');
}





void generat_e(int i){
 for (int j = 0; j < i; j++)
 {
     a.push_back(rand());
 }

}

void avg_time(){
    cout<<"start"<<endl;
for (int i = 1; i <= 10; i=i+1)
{
    // cout<<"enter to generate"<<endl;
     generat_e(i);
     start = clock();
     for (int k = 0; k < 10; k++)
     { 
          string s  = "";
     True_False_fun(i,s);
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