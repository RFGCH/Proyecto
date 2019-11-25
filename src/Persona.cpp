#include "Persona.h"
#include <iostream>

using namespace std;

Persona :: Persona(string nombre,string password)
    : nombre(nombre),password(password)
{}
string Persona :: getnombre(){
    return nombre;
}
