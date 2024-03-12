#include <iostream>
#include <fstream>
#include <time.h>
#include <random>
using namespace std;

const int size = 50; // Define the size of the array globally

void WriteDataToFile(int i, double avgtime) {
    ofstream fout("Magic_square_data.txt", ios::app);
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

void generator(int a[][size], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    }
}

void magic_sq(int a[][size], int n) {
    int num = 1;
    int i = n / 2;
    int j = n - 1;

    while (num <= n * n) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        } else {
            if (j == n)
                j = 0;
            if (i < 0)
                i = n - 1;
        }

        if (a[i][j] != 0) {
            j -= 2;
            i++;
            continue;
        } else {
            a[i][j] = num++;
        }

        j++;
        i--;
    }
}


void Algorithm() {
    double time1, time2, avgtime;
    for (int i = 9; i <= size; i = i+2 ) {
        int (*a)[size] = new int[i][size]; // Dynamically allocate 2D array
        generator(a, i);
        time1 = (double)clock();
        for (int k = 0; k < 10; k++) {
            magic_sq(a, i);
        }
        time2 = (double)clock();
        avgtime = (time2 - time1) / 10.0;
        cout << i << "-" << avgtime << endl;
        WriteDataToFile(i, avgtime);
        delete[] a; // Delete dynamically allocated array
    }
    PlotChart();
}

int main() {
    Algorithm();
    return 0;
}
