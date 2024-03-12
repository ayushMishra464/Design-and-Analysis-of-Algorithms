#include <iostream>
#include <fstream>
#include <time.h>
#include <random>
using namespace std;

void WriteDataToFile(int i, double avgtime) {
    ofstream fout("Max_Min_data.txt", ios::app);
    if (fout.is_open()) {
        fout << i << " " << avgtime << endl;
        fout.close();
    } else {
        cerr << "Unable to open file for writing data." << endl;
    }
}

void PlotChart() {
    FILE *gnuplotPipe = _popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot 'data.txt' with linespoints title 'Average Time'\n");
        _pclose(gnuplotPipe);
    } else {
        cerr << "Gnuplot not found. Please install Gnuplot." << endl;
    }
}

void Generate(int a[], int i) {
    for (int j = 0; j < i; j++) {
        a[j] = rand();
    }
}
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

void Algorithm() {
    double time1, time2, avgtime;
    for (int i = 1000; i <= 50000; i += 500) {
        int *a = new int[i];
        Generate(a, i);
        time1 = (double)clock();
        for (int k = 0; k < 10; k++) {
          int max1= 0,min1 = 0; 
           Max_Min(a, 0, i - 1,max1,min1);
        }
        time2 = (double)clock();
        avgtime = (time2 - time1) / 10.0;
        cout << i << "-" << avgtime << endl;
        WriteDataToFile(i, avgtime);
        delete[] a;
    }
    PlotChart();
}

int main() {
    Algorithm();
    return 0;
}
