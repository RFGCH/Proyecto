#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor(string nombre,string password)
    :Persona(nombre,password)
{}
void Supervisor::print(){
    cout << "\n   Nombre: " << getnombre() << endl;
    cout << "   Puesto: Supervisor" << endl;
}
