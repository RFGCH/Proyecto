#include "IngresarGUI.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <MaquinasGUI.h>

using namespace std;

IngresarGUI::IngresarGUI()
{
    system("cls");
    ifstream ingresar("Datos//users.txt");
    bool valido=true;
    if(!ingresar){valido = false;system("cls");cout << "\n  *** No se a podido acceder a el archivo users ***" << endl;}
    if(valido){
    string nick,pass,registro;
    cout << "\n ------  Ingreso  ------" << endl;
    cout << "\n   Nick: ";
    cin >> nick;
    int leng = nick.length();
    if(leng > 8 || leng < 3){valido = false;system("cls");cout << "\n  *** Nick de entre 3 a 8 de longitud ***" << endl;}
    if(valido){
    cout << "\n   Password: ";
    cin >> pass;
    leng = pass.length();
    if(leng > 8 || leng < 3){valido = false;system("cls");cout << "\n  *** Password de entre 3 a 8 de longitud ***" << endl;}
    if(valido){
    while (!ingresar.eof()){
        getline(ingresar,registro);
        if(nick==registro){
            getline(ingresar,registro);
            getline(ingresar,registro);
            if(pass==registro){
                system("cls");
                Menu(nick);
                return;
            }
            system("cls");
            cout << "\n  *** Contraseña incorrecta ***" << endl;
            return;
        }
        getline(ingresar,registro);
    }
    system("cls");
    cout << "\n  *** Usted no esta registrado ***" << endl;
    return;
    ingresar.close();
    }
    }
    }
}

string IngresarGUI::Menu(string nick){
    bool run=true;
    while(run){
        system("cls");
        string opc;
        cout << "\n ------  Bienvenido "  << nick << " ------" << endl;
        cout << "\n   1.-Maquinas" << endl;
        cout << "\n   2.-Usuarios" << endl;
        cout << "\n   3.-Perfil" << endl;
        cout << "\n   4.-Salir" << endl;
        cout << "\n   Ingrese su opcion: ";
        cin >> opc;
        if(opc == "1")
            Maquinas(nick);
        else if(opc == "2")
            Usuarios();
        else if(opc == "3")
            Perfil(nick);
        else if(opc == "4"){
            system("cls");
            run = false;
        }
        else
            cout << "\n  *** Reingrese un valor valido ***" << endl;
    }
}
void IngresarGUI::Maquinas(string nick){
    MaquinasGUI a(nick);
}
void IngresarGUI::Perfil(string nick){
    cout << "CCC";
    ifstream leer("Datos//users.txt");
    string usuario=".";
    while(nick != usuario){
        getline(leer,usuario);
        cout << "AAAA";
    }
    cout << "BBB";
    leer.close();
}

void IngresarGUI::Usuarios(){
    system("cls");
    ifstream leer("Datos//users.txt");
    while(!leer.eof()){
        string registro;
        getline(leer,registro);
        cout << "\n   Nombre: " << registro << endl;
        getline(leer,registro);
        cout << "   Puesto: " << registro << endl;
        getline(leer,registro);
    }
    string opc;
    cout << "\n Ingrese cualquier tecla... ";
    cin >> opc;
}
