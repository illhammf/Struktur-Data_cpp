#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int V;                       // Jumlah vertex (value)
    vector<vector<int>> adjList; // Daftar adjacency

public:
    // Konstruktor untuk menginisialisasi graph dengan jumlah vertex
    Graph(int V)
    {
        this->V = V;
        adjList.resize(V);
    }

    // Fungsi untuk menambahkan edge ke graph
    void addEdge(int v, int w)
    {
        adjList[v].push_back(w); // Menambahkan w ke daftar adjacency v
        adjList[w].push_back(v); // Menambahkan v ke daftar adjacency w (untuk graph tak berarah)
    }

    // Fungsi untuk mencetak graph
    void printGraph()
    {
        for (int v = 0; v < V; ++v)
        {
            cout << "Vertex " << v << ": ";
            for (auto x : adjList[v])
                cout << " -> " << x;
            cout << endl;
        }
    }
};

int main()
{
    int V = 5; // Jumlah vertex

    // Buat graph dengan jumlah vertex tertentu
    Graph graph(V);

    // Tambahkan edge ke graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Cetak graph
    graph.printGraph();

    return 0;
}