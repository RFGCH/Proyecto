#ifndef MAQUINA_H
#define MAQUINA_H
#include <iostream>

using namespace std;


class Maquina
{
    public:
        Maquina(string,string,string);

/*Sobrecarga de operadores
  para usar el ordenamiento de listas */

        bool operator < (Maquina a);
        bool operator > (Maquina a);
        void print();
    protected:

    private:
        string codigo,resumen,descripcion;
};

#endif // MAQUINA_H
