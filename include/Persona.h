#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    public:

        Persona(string,string);
        Persona(const Persona&);
        string getnombre();
        string getpasswo();
        bool operator < (Persona a);
        bool operator > (Persona a);

    protected:

        string nombre,password;

    private:

};

#endif // PERSONA_H
