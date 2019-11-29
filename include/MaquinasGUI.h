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

    private:
        string nick;
};

#endif // MAQUINASGUI_H
