#include "Persona.h"
#include <string>
#include <iostream>

using namespace std;

Persona :: Persona(string nombre,string password)
    : nombre(nombre),password(password)
{}
Persona :: Persona(const Persona &a)
    : nombre(a.nombre),password(a.password)
{}
string Persona :: getnombre(){
    return nombre;
}
string Persona :: getpasswo(){
    return password;
}
bool Persona::operator <(Persona a){
    return nombre < a.nombre;
}
bool Persona::operator >(Persona a){
    return nombre > a.nombre;
}
