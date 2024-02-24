#pragma once
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void Eje_3() {
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
        G[x-1].push_back(y-1);
        G[y-1].push_back(x - 1);
    }
    cout << "\n\n";

    for (int i = 0; i < G.size(); ++i) {
        cout << "Vertice " << i + 1 << ": ";
        for (int j : G[i]) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }


}
