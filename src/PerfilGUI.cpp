#include "PerfilGUI.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

PerfilGUI::PerfilGUI(string nick)
    :nick(nick)
{
    bool run=true;
    while(run){
        system("cls");
        string opc;
        cout << "\n ------  Perfil ------" << endl;
        cout << "\n   1.-Visualisar usuario" << endl;
        cout << "\n   2.-Modificar" << endl;
        cout << "\n   3.-Eliminar" << endl;
        cout << "\n   4.-Salir" << endl;
        cout << "\n   Ingrese su opcion: ";
        cin >> opc;
        if(opc == "1")
            Ver(nick);
        else if(opc == "2")
            Mod(nick);
        else if(opc == "3")
            Elm(nick);
        else if(opc == "4"){
            system("cls");
            run = false;
        }
        else
            cout << "\n  *** Reingrese un valor valido ***" << endl;
    }
}

void PerfilGUI::Ver(string nick){
    system("cls");
    ifstream ingresar("Datos//users.txt");
    bool valido=true;
    if(!ingresar){valido = false;system("cls");cout << "\n  *** No se a podido acceder a el archivo users ***" << endl;}
    if(valido){
    cout << "\n ------ " <<  nick << " ------" << endl;
    string registro,nombre, password,rango;
    while (!ingresar.eof()){
        getline(ingresar,registro);
        if(registro == nick){
            nombre = registro;
            getline(ingresar,password);
            getline(ingresar,rango);
        }
    }
    cout << "\n   Nombre: " << nombre << endl;
    cout << "\n   Password: " << password << endl;
    cout << "\n   Rango: " << rango << endl;
    string opc;
    cout << "\n Ingrese cualquier tecla... ";
    cin >> opc;
    }

}
void PerfilGUI::Mod(string nick){

    system("cls");
    bool valido = true;
    ofstream registrar("Datos//codigofacilito.txt");
    ifstream leer("Datos//users.txt");
    if(!registrar){valido = false;system("cls");cout << "\n  *** No se a podido acceder a el archivo users ***" << endl;}
    if (valido){
    string registro,opc,pass,puesto,cambio;
    cout << "\n ------  Modificar  -----" << endl;
    cout << "\n   1.- Nombre" << endl;
    cout << "\n   2.- Password" << endl;
    cout << "\n   3.- Rango" << endl;
    cout << "\n   4.- Salir" << endl;
    cout << "\n   Ingrese su opcion: ";
    cin >> opc;
    if(opc == "4"){valido = false;system("cls");cout << "AAa";}
    if (valido){
    cout << "\n   Cambiarlo por: ";
    cin >>cambio;
    while (!leer.eof()){
        getline(leer,registro);
        if(registro==nick){
            nick = registro;
            getline(leer,pass);
            getline(leer,puesto);
            if(opc == "1")
                nick = cambio;
            else if(opc == "2")
                pass = cambio;
            else if(opc == "3")
                puesto = cambio;
            registrar<<nick + "\n";
            registrar<<pass + "\n";
            registrar<<puesto + "\n";
            getline(leer,registro);
        }
        if (registro != "")
            registrar<<registro + "\n";
    }
    }
    }
    remove("Datos//users.txt");
    rename("Datos//codigofacilito.txt","Datos//users.txt");
    registrar.close();
    leer.close();
}
void PerfilGUI::Elm(string nick){
    string opc;
    cout << "\n ******  Eliminar  ******" << endl;
    cout << "\n   1.- Estoy seguro de eliminarlo" << endl;
    cout << "\n   2.- Salir" << endl;
    cout << "\n   Ingrese su opcion: ";
    cin >> opc;
    if (opc == "1"){
        string registro;
        ofstream registrar3("Datos//codigofacilito.txt");
        ifstream leer3("Datos//users.txt");
        while (!leer3.eof()){
            getline(leer3,registro);
            if(registro==nick){
                getline(leer3,registro);
                getline(leer3,registro);
                getline(leer3,registro);
            }
            if (registro != "")
                registrar3<<registro + "\n";
        }
    remove("Datos//users.txt");
    rename("Datos//codigofacilito.txt","Datos//users.txt");
    leer3.close();
    registrar3.close();
    }
}
