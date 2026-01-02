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
    int V;
    cout << "Masukkan jumlah kota / vertexnya = ";
    cin >> V;
    cin.ignore(); // untuk membersihkan newline (\n) dari input sebelumnya

    // Buat graf dengan jumlah vertex tertentu
    Graph graph(V);

    // Input nama kota
    cout << "Masukkan nama kota: \n";
    for (int i = 0; i < V; ++i)
    {
        string city;
        cout << "Kota ke-" << i << ": ";
        getline(cin, city);
        graph.addCity(i, city);
    }

    // Input jumlah edge (hubungan)
    int E;
    cout << "\nMasukkan jumlah Edge: ";
    cin >> E;

    cout << "Masukkan arah antar kota (index berdasarkan urutan input kota):\n";
    for (int i = 0; i < E; ++i)
    {
        int v, w;
        cout << "Edge ke-" << i + 1 << " (contoh: 0 1, lalu enter): ";
        cin >> v >> w;
        graph.addEdge(v, w);
    }

    // Cetak graph
    cout << "\nHasil Graph: " << endl;
    graph.printGraph();
    cout << "-------------------------------------" << endl;

    return 0;
}