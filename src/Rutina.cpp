#include "Rutina.h"

Rutina::Rutina(Id id, std::vector<Instruccion> instrucciones){
    _id = id;
    _instrucciones = instrucciones;
}

std::vector<Instruccion> Rutina::devolverInstrucciones() const {
    return _instrucciones;
}

Id Rutina::devolverId() const {
    return _id;
}

void Rutina::agregarInstruccion(Instruccion instruccion){
    _instrucciones.push_back(instruccion);
}
