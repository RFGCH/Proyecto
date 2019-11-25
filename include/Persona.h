#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    public:

        Persona(string,string);
        string getnombre();

    private:

        string nombre,password;


};

#endif // PERSONA_H
