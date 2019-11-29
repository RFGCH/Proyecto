#include "Maquina.h"

Maquina::Maquina(string codigo,string resumen,string descripcion)
    :   codigo(codigo),resumen(resumen),descripcion(descripcion)
{
}

bool Maquina::operator <(Maquina a){
    return codigo.compare(a.codigo);
}
bool Maquina::operator >(Maquina a){
    return (!codigo.compare(a.codigo));
}
