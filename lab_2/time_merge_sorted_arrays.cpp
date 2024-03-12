#include <iostream>
#include <fstream>
#include <time.h>
#include <random>
#include<bits/stdc++.h>
using namespace std;

void WriteDataToFile(int i, double avgtime) {
    ofstream fout("data.txt", ios::app);
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

void sort_array(int arr[], int lowa, int j, int higha, int s) {
    int arr1[s];
    int i = 0;
    int k = j + 1;
    while ((lowa <= j) && (k <= higha)) {
        if (arr[lowa] < arr[k]) {
            arr1[i] = arr[lowa];
            lowa++;
        } else {
            arr1[i] = arr[k];
            k++;
        }
        i++;
    }

    while (lowa <= j) {
        arr1[i++] = arr[lowa++];
    }

    while (k <= higha) {
        arr1[i++] = arr[k++];
    }

    for (int i = 0; i < s; i++) {
        arr[i] = arr1[i];
    }
}

void Algorithm() {
    double time1, time2, avgtime;
    for (int i = 10000; i < 260000; i += 20000) {
        int a[i];
        for (int j = 0; j < i; j++) {
            a[j] = rand();
        }
        std::sort(a, a + i / 2);    // Sorting first half of the array
        std::sort(a + i / 2, a + i); // Sorting second half of the array

        time1 = (double)clock();
        for (int k = 0; k < 10; k++) {
            sort_array(a, 0, i / 2 - 1, i - 1, i); 
        }
        time2 = (double)clock();

        avgtime = (time2 - time1) / 10.0;
        cout << i << "-" << avgtime << endl;
        WriteDataToFile(i, avgtime);
    }
    PlotChart();
}

int main() {
    Algorithm();
    return 0;
}
