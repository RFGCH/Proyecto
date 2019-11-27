#ifndef PERFILGUI_H
#define PERFILGUI_H
#include <iostream>

using namespace std;

class PerfilGUI
{
    public:

        PerfilGUI(string);
        void Ver(string);
        void Mod(string);
        void Elm(string);

    protected:

    private:

        string nick;

};

#endif // PERFILGUI_H
