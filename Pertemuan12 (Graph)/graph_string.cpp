#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Graph
{
private:
    int V;
    vector<vector<int>> adjList; // Daftar adjacency
    vector<string> cities;       // Daftar nama kota

public:
    // Konstruktor untuk menginisialisasi graph dengan jumlah vertex
    Graph(int V)
    {
        this->V = V;
        adjList.resize(V);
        cities.resize(V);
    }

    // Fungsi untuk menambahkan nama kota
    void addCity(int index, string city)
    {
        if (index >= 0 && index < V)
        {
            cities[index] = city;
        }
    }

    // Fungsi untuk menambahkan edge ke graph
    void addEdge(int v, int w)
    {
        adjList[v].push_back(w); // Tambahkan w ke daftar adjacency v
        adjList[w].push_back(v); // Tambahkan v ke daftar adjacency w (karena graph tak berarah)
    }

    // Fungsi untuk mencetak graph
    void printGraph()
    {
        for (int v = 0; v < V; ++v)
        {
            cout << cities[v] << " (" << v << "): ";
            for (auto x : adjList[v])
                cout << " -> " << cities[x] << " (" << x << ")";
            cout << endl;
        }
    }
};

int main()
{
    int V = 5; // Jumlah vertex

    // Buat graf dengan jumlah vertex tertentu
    Graph graph(V);

    // Tambhkan nama kota
    graph.addCity(0, "Jakarta");
    graph.addCity(1, "Tangerang");
    graph.addCity(2, "Bekasi");
    graph.addCity(3, "Depok");
    graph.addCity(4, "Bogor");

    // Tambahkan edge ke graph
    graph.addEdge(0, 1); // Jakarta ke Tangerang
    graph.addEdge(0, 2); // Jakarta ke Bekasi
    graph.addEdge(0, 3); // Jakarta ke Depok
    graph.addEdge(0, 4); // Jakarta ke Bogor

    graph.printGraph();

    return 0;
}