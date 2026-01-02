#include <iostream>
#include <vector>
using namespace std;

void tambahEdge(vector<int> graph[], int u, int v) {
    graph[u].push_back(v);  // untuk graf berarah
    // graph[v].push_back(u); // tambahkan ini kalau graf tidak berarah
}

void tampilGraph(vector<int> graph[], int V) {
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << " terhubung ke: ";
        for (int j : graph[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5; // jumlah node
    vector<int> graph[V];

    tambahEdge(graph, 0, 1);
    tambahEdge(graph, 0, 4);
    tambahEdge(graph, 1, 2);
    tambahEdge(graph, 1, 3);
    tambahEdge(graph, 1, 4);
    tambahEdge(graph, 2, 3);
    tambahEdge(graph, 3, 4);

    tampilGraph(graph, V);

    return 0;
}
