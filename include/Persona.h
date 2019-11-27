#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    public:

        Persona(string,string);
        Persona(const Persona&);

//Funciones get

        string getnombre();
        string getpasswo();

/*Sobrecarga de operadores
  para usar el ordenamiento de listas */

        bool operator < (Persona a);
        bool operator > (Persona a);

    protected:

        string nombre,password;

    private:

};

#endif // PERSONA_H
