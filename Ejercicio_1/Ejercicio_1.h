#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

//Determina las adyacencia
void unirNodos(vector<vector<int>>& vert, int u, int v) {
    u = u - 1;
    v = v - 1;
    vert[u].push_back(v);
    vert[v].push_back(u);
}

//Mostrar Grafo
void mostrarGrafo(const vector<vector<int>>& ady) {
    for (int i = 0; i < ady.size(); ++i) {
        cout << "Vertice " << i + 1 << ": ";
        for (int j : ady[i]) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}



// Inicializador
void Eje_1() {
    int n, m;
    cout << "Ingrese el numero de vertices: ";
    cin >> n;
    cout << "\n\n";
    cout << "Ingrese el numero de aristas: ";
    cin >> m;
    cout << "\n\n";

    vector<vector<int>> G(n); 

    cout << "Ingrese las aristas en formato 'x y', donde x e y son vertices conectados:";
    cout << "\n\n";
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        unirNodos(G, x, y); 
    }
    cout << "\n\n";

    mostrarGrafo(G); 
}
