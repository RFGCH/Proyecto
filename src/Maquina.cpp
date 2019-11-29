#include "Maquina.h"
#include <iostream>

using namespace std;

Maquina::Maquina(string codigo, string resumen,string descripcion)
    :codigo(codigo),resumen(resumen),descripcion(descripcion)
{}
bool Maquina::operator <(Maquina a){
    return codigo.compare(a.codigo);
}
bool Maquina::operator >(Maquina a){
    return (!codigo.compare(a.codigo));
}
void Maquina :: print(){
    cout << "\n   Codigo: "  << codigo << endl;
    cout << "\n   Resumen: "  << resumen << "..." << endl;
}
