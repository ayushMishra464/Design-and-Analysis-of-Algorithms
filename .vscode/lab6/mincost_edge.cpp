#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX
#define v 8


void multistage_graph(int stages, int graph[v][v], int vertices) {
    int fcost[vertices];
    int path[vertices];

    for (int i = 0; i < vertices; i++) {
        fcost[i] = 0;
    }
    fcost[vertices - 1] = 0;

    // Calculating fcost[] array
    for (int i = vertices - 2; i >= 0; i--) {
        int min_cost = INF;
        int min_index = -1;

        for (int j = i + 1; j < vertices; j++) {
            if (graph[i][j] != INF && graph[i][j] + fcost[j] < min_cost) {
                min_cost = graph[i][j] + fcost[j];
                min_index = j;
            }
        }

        fcost[i] = min_cost;
        path[i] = min_index;
    }

    cout << "Minimum Cost: " << fcost[0] << endl;
    cout << "Path: ";
    int next = 0;
    cout << next + 1 << " ";
    while (next != vertices - 1) {
        next = path[next];
        cout << next + 1 << " ";
    }
}


int main() {
    int stages = 4; 
//     int vertices = 8;
 
   
    int graph[v][v] = {
        {INF, 1, 2, 5, INF, INF, INF, INF},
        {INF, INF, INF, INF, 4, 11, INF, INF},
        {INF, INF, INF, INF, 9, 5, 16, INF},
        {INF, INF, INF, INF, INF, INF, 2, INF},
        {INF, INF, INF, INF, INF, INF, INF, 18},
        {INF, INF, INF, INF, INF, INF, INF, 13},
        {INF, INF, INF, INF, INF, INF, INF, 2},
        {INF, INF, INF, INF, INF, INF, INF, INF}
    };


    multistage_graph(stages, graph, v);

    return 0;
}
