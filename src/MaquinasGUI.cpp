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
        system("cls");
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
    ifstream leer("Datos//maquinas.txt");
    if(leer.eof()){
        cout << "\n  ***No hay maquinas que mostrar***" << endl;
    }
    string opc;
    cout << "\n ------  Buscar  ------" << endl;
    cout << "\n   1.-Codigo" << endl;
    cout << "\n   2.-Salir" << endl;
    cout << "\n   Ingrese el opcion: ";
    cin >> opc;
    if(opc == "2"){leer.close();system("cls");}
    if(opc == "1"){
    cout << "\n   Ingrese el codigo: ";
    string codigo,resumen,registro;
    cin >> codigo;
    while(!leer.eof()){
        getline(leer,registro);
        if(codigo == registro){
            system("cls");
            cout << "\n ---- " << codigo << " ---   \n"<< endl;
            getline(leer,resumen);
            cout << " " << resumen << "...\n" << endl;
        }
    }
    cout << "\n Ingrese cualquier tecla... ";
    string opc;
    cin >> opc;
    leer.close();
    system("cls");
    }
    else{system("cls");cout << "\n  ***Valor no valido***" << endl;}
}
void MaquinasGUI::Agregar(){
    system("cls");
    bool valido = true;
    ofstream registrar("Datos//codigofacilito.txt");
    ifstream leer("Datos//maquinas.txt");
    if(!leer){valido = false;system("cls");cout << "\n  *** No se a podido acceder a el archivo maquinas ***" << endl;}
    if (valido){
    string codigo,registro;
    char resumen[50];
    cout << "\n ------  Agregar  -----" << endl;
    cout << "\n   Codigo: ";
    cin >> codigo;
    cout << "\n   Resumen: ";
    cin.ignore('\n');
    cin.getline(resumen,50);
    while (!leer.eof()){
        getline(leer,registro);
        if(registro==codigo){
            leer.close();
            registrar.close();
            remove("Datos//codigofacilito.txt");
            system("cls");
            cout << "\n  *** El codigo ya esta registrado *** " << endl;
            return;
        }
        if(registro != "")
        registrar<<registro + "\n";
    }
    string resumen2 = resumen;
    registrar << codigo+"\n";
    registrar << resumen2+"\n";
    system("cls");
    leer.close();
    registrar.close();
    remove("Datos//maquinas.txt");
    rename("Datos//codigofacilito.txt","Datos//maquinas.txt");
    }
}
