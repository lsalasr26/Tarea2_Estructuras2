#include <iostream>
#include <vector>

using namespace std;


void unirNodos2(vector<vector<int>>& vert, int u, int v) {
    vert[u].push_back(v);
    //vert[v].push_back(u);
}

//Mostrar Grafo
void mostrarGrafo2(const vector<vector<int>>& ady) {
    for (size_t i = 0; i < ady.size(); ++i) {
        cout << "Vertice " << i + 1 << ": ";
        for (int j : ady[i]) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}


//Inicilizador 
void Eje_2() {
    int n, m;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> n;
    cout << "\n";
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> m;
    cout << "\n";

    vector<vector<int>> matriz(n, vector<int>(m));
    vector<vector<int>> G(n);


    cout << "Ingrese los elementos de la matriz por fila:" << endl;
    cout << "\n";
    for (int i = 0; i < n; ++i) {
        cout << "Fila " << i + 1 << ":" << endl;
        cout << "\n";
        for (int j = 0; j < m; ++j) {
            cout << "Columna " << j + 1 << ": ";
            int valor;
            cin >> valor;
            // Validar que el valor sea 0 o 1
            while (valor != 0 && valor != 1) {
                cout << "\n";
                cout << "Error: solo se pueden agregar 1 y 0. Intente de nuevo." << endl;
                cout << "\n";
                cout << "Columna " << j + 1 << ": ";
                cin >> valor;
            }
            matriz[i][j] = valor;
            if (valor == 1) {
                unirNodos2(G, i, j);
            }
            cout << "\n";
        }
    }

    // Mostrar la matriz
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";

    }

    cout << "\n\n";
    mostrarGrafo2(G);
}
