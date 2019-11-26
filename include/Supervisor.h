#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include <iostream>
#include <Persona.h>

using namespace std;

class Supervisor:public Persona
{
    public:
        Supervisor(string,string);
        void print();

};

#endif // SUPERVISOR_H
