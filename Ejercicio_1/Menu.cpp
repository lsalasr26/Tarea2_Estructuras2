#include <iostream>
#include <vector>
#include "Ejercicio_1.h"
#include "Ejercicio_2.h"
#include "Ejercicio_3.h"

using namespace std;


void menu() {
    int opcion;
    do {
        cout << "\t---------MENU PRINCIPAL---------\n";
        cout << "\n1. Ejercicio 1\n";
        cout << "\n2. Ejercicio 2\n";
        cout << "\n3. Ejercicio 3\n";
        cout << "\n9. Salir del Menu\n";
        cout << "\nDigite la Opcion --> ";
        cin >> opcion;


        switch (opcion) {
        case 1: {
            system("cls");
            Eje_1();
            cout << "\n";
            system("pause");
            break;
        }
        case 2: {
            system("cls");
            Eje_2();
            cout << "\n";
            system("pause");
            break;
        }
        case 3: {
            system("cls");
            Eje_3();
            cout << "\n";
            system("pause");
            break;
        }
        };
        system("cls");
    } while (opcion != 9);
}



void main() {

    cout << "Tarea 2 de Estructuras de Datos II\n";
    cout << "\nLuis Salas Rivera y Brayan Carranza Corrales\n";
    cout << "\nPresiona ENTER para acceder al menu...\n\n";
    cout << "\n";
    system("pause");
    system("cls");

    menu();

}
