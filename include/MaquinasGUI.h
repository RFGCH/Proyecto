#ifndef MAQUINASGUI_H
#define MAQUINASGUI_H
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;


class MaquinasGUI
{
    public:

        MaquinasGUI(string);

        void Vistarapida();
        void Buscar();
        void Agregar();

    protected:
        string nick;

    private:
};

#endif // MAQUINASGUI_H
