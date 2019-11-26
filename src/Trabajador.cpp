#include "Trabajador.h"
#include <iostream>

using namespace std;

Trabajador::Trabajador(string nombre,string password)
    :Persona(nombre,password)
{}

void Trabajador::print(){
    cout << "\n   Nombre: " << getnombre() << endl;
    cout << "   Puesto: Trabajador" << endl;
}
