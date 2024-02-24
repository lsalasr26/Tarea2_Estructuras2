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
    cout << "\n\nConclusiones\n";
    cout << "\n1- Observando las similitudes y diferencias de los ejercicios 1, 2 y 3, nos damos cuenta que la manera de organizar y guardar los datos, donde en el primer ejercicio hay que guardar dos veces los datos de manera inversa por ejemplo 1,2 y 2,1 para realizar correctamente el ejercicio, en caso contrario al ejercicio 2 donde la lógica cambia  y los datos se van recibiendo de uno en uno, con una determinada dirección.\n";
    cout << "\n2- Al realizar el ejercicio 1 nos dimos cuenta que la lógica que con lleva este ejercicio es mucho más pesada que en la que se utiliza una matriz, además que el ejercicio solo se puede realizar si se tiene el conocimiento como se realizan los grafos de lo contrario el sistema no podrá funcionar de la manera correcta\n";
    cout << "\nPresiona ENTER para acceder al menu...\n\n";
    cout << "\n";
    system("pause");
    system("cls");

    menu();

}
