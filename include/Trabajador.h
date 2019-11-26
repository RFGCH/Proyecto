#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <Persona.h>
#include <iostream>

using namespace std;

class Trabajador:public Persona
{
    public:
        Trabajador(string,string);
        void print();


};

#endif // TRABAJADOR_H
