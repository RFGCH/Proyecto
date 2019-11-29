#ifndef MAQUINA_H
#define MAQUINA_H
#include <iostream>

using namespace std;


class Maquina
{
    public:

        Maquina(string,string,string);

        bool operator < (Maquina a);
        bool operator > (Maquina a);

    protected:


    private:

        string codigo,resumen,descripcion;
};

#endif // MAQUINA_H
