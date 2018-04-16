#include "Memoria.h"

void Memoria::agregarVariable(Variable variable) {
    _elementos.push_back(variable);
}

int Memoria::direccionDeMemoria(Id idVariable) const {
    int i = 0;
    while (i < _elementos.size() && _elementos[i].devolverNombre() != idVariable)
        i++;
    return i;
}

Variable Memoria::devolverVariable(int direccion) const {
    return _elementos[direccion];
}

bool Memoria::existeVariable(Id nombre) const {
    bool result = false;
    int i = 0;
    while (i < _elementos.size() && _elementos[i].devolverNombre() != nombre)
        i++;
    if (i < _elementos.size())
        result = true;
    return result;
}