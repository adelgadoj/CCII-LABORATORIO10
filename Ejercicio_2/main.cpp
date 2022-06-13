#include <iostream>
#include "ListaEnlazada.h"
using namespace std;
ListaEnlazada l;
void menu()
{
    while (true)
    {
        int r;
        int d;
        cout << "\tMENU" << endl;
        cout << "Elija Opcion..." << endl;
        cout << "1) Ingresar Al Final" << endl;
        cout << "2) Ingresar Al Principio" << endl;
        cout << "3) Mostrar Datos" << endl;
        cout << "0) Salir" << endl;
        cout << "R: " << endl;
        cin >> r;
        switch (r)
        {
        case 0:
            exit(1);
        case 1:
            cout << "Ingrese Nuevo Dato: " << endl;
            cin >> d;
            l.insertarFinal(d);
            break;
        case 2:
            cout << "Ingrese Nuevo Dato: " << endl;
            cin >> d;
            l.insertarPrincipio(d);
            break;
        case 3:
            l.print();
            system("pause");
            break;
        default:
            cout << "Opcion No Valida" << endl;
            system("pause");
            break;
        }
    }
}

int main()
{
    menu();
    return 0;
}