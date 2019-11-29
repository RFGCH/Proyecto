#include "GUI.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <IngresarGUI.h>

using namespace std;
GUI::GUI()
{
    system("color F0");
    string opcion;
    bool run=true;
    while(run){
        cout << "\n ------  M  C  M  ------" << endl;
        cout << "\n   1.- Ingresar" << endl;
        cout << "\n   2.- Registrarse" << endl;
        cout << "\n   3.- Opciones" << endl;
        cout << "\n   4.- Salir" << endl;
        cout << "\n   Ingresar su opcion: ";
        cin >> opcion;
        if(opcion == "1")
            ingresar();
        else if(opcion == "2")
            registrarse();
        else if(opcion == "3")
            opciones();
        else if(opcion == "4"){
            run = false;
        }
        else{
            system("cls");
            cout <<"\n  ***Reingrese una opcion valida de entre 1 y 4***" << endl;
        }
    }
}

GUI::~GUI()
{
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\t\t  Gracias por usar MCM\n\n\n\n\n\n\n\n" << endl;
}

void GUI::registrarse(){
    system("cls");
    bool valido = true;
    ofstream registrar("Datos//codigofacilito.txt");
    ifstream leer("Datos//users.txt");
    if(!registrar){valido = false;system("cls");cout << "\n  *** No se a podido acceder a el archivo users ***" << endl;}
    if (valido){
    string nick,pass,puesto,registro;
    cout << "\n ------  Registro  -----" << endl;
    cout << "\n   Nick: ";
    cin >> nick;
    int leng = nick.length();
    if(leng > 8 || leng < 3){valido = false;system("cls");cout << "\n  *** Nick de entre 3 a 8 de longitud ***" << endl;}
    if(valido){
    cout << "\n   Puesto: ";
    cin >> puesto;
    cout << "\n   Password: ";
    cin >> pass;
    leng = pass.length();
    if(leng > 8 || leng < 3){valido = false;system("cls");cout << "\n  *** Password de entre 3 a 8 de longitud ***" << endl;}
    if(valido){
    while (!leer.eof()){
        getline(leer,registro);
        if(registro==nick){
            leer.close();
            registrar.close();
            remove("Datos//codigofacilito.txt");
            system("cls");
            cout << "\n  *** El nick ya esta registrado *** " << endl;
            return;
        }
        if(registro != "")
        registrar<<registro + "\n";
    }
    registrar << nick+"\n";
    registrar << puesto+"\n";
    registrar << pass;
    system("cls");
    leer.close();
    registrar.close();
    remove("Datos//users.txt");
    rename("Datos//codigofacilito.txt","Datos//users.txt");
    }
    }
    }
}
void GUI::opciones(){
    system("cls");
    string opc;
    cout << "\n ------  Opciones  ------" << endl;
    cout << "\n   1.- Fondo negro con letras blancas" << endl;
    cout << "\n   2.- Fondo purpura con letras blancas" << endl;
    cout << "\n   3.- Fondo blanco con letras negras" << endl;
    cout << "\n   4.- Fondo aguamarina con letras negras" << endl;
    cout << "\n   5.- Fondo azul con letras negras" << endl;
    cout << "\n    Ingrese un color de preferencia: " ;
    cin >> opc;
    if(opc=="1"){
        system("color 07");
    }
    else if(opc=="2"){
        system("color 57");
    }
    else if(opc=="3"){
        system("color F0");
    }
    else if(opc=="4"){
        system("color B0");
    }
    else if(opc=="5"){
        system("color 90");
    }
    system("cls");
}
void GUI::ingresar(){
    IngresarGUI a;
}
