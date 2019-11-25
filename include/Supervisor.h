#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include <iostream>
#include <Persona.h>

using namespace std;

class Supervisor:protected Persona
{
    public:
        Supervisor(string,string);

};

#endif // SUPERVISOR_H
