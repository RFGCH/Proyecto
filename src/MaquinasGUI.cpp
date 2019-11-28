#include "MaquinasGUI.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

MaquinasGUI::MaquinasGUI(string nick):
        nick(nick)
{
    bool run = true;
    system("cls");
    while(run){
        string opc;
        cout << "\n ------  Maquinas  ------" << endl;
        cout << "\n   1.-Vista rapida" << endl;
        cout << "\n   2.-Buscar" << endl;
        cout << "\n   3.-Agregar" << endl;
        cout << "\n   4.-Salir" << endl;
        cout << "\n   Ingrese su opcion: ";
        cin >> opc;
        system("cls");
        if(opc == "1")
            Vistarapida();
        else if(opc == "2")
            Buscar();
        else if(opc == "3")
            Agregar();
        else if(opc == "4"){
            system("cls");
            run = false;
        }
        else
            cout << "\n  ***Reingrese un valor valido***" << endl;
    }
}

void MaquinasGUI::Vistarapida(){
    system("cls");
    ifstream leer("Datos//maquinas.txt");
    if(leer.eof()){
        cout << "\n  ***No hay maquinas que mostrar***" << endl;
    }
    while(!leer.eof()){
        string codigo,resumen;
        getline(leer,codigo);
        cout << "\n ---- " << codigo << " ---   \n"<< endl;
        getline(leer,resumen);
        cout << " " << resumen << "...\n" << endl;
    }
    cout << "\n Ingrese cualquier tecla... ";
    string opc;
    cin >> opc;
}
void MaquinasGUI::Buscar(){
    system("cls");
    ifstream leer("Datos//maquinas.txt");
    if(leer.eof()){
        cout << "\n  ***No hay maquinas que mostrar***" << endl;
    }
        string opc;
        cout << "\n ******  Eliminar  ******" << endl;
        cout << "\n   1.-Estoy seguro de eliminar mi usuario" << endl;
        cout << "\n   2.-Salir" << endl;
        cin >> opc;
    if
    while(!leer.eof()){
        string codigo,resumen;
        getline(leer,codigo);
        cout << "\n ---- " << codigo << " ---   \n"<< endl;
        getline(leer,resumen);
        cout << " " << resumen << "...\n" << endl;
    }
    cout << "\n Ingrese cualquier tecla... ";
    string opc;
    cin >> opc;
}
void MaquinasGUI::Agregar(){
}
