#include "Planner.h"
#include <iostream>

using namespace std;

Planner::Planner(string nombre,string password)
    :Persona(nombre,password)
{}
void Planner::print(){
    cout << "\n   Nombre: " << getnombre() << endl;
    cout << "   Puesto: Planner" << endl;
}
