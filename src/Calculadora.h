#ifndef CALCULADORA_H
#define CALCULADORA_H

#include "Pila.h"
#include "Memoria.h"
#include "Programa.h"

class Calculadora {
public:
    Calculadora(Programa programa);
    void asignarVariable(Id idVariable, int valor);
    void ejecutar(Id idRutina);
    int valorVariable(Id idVariable) const;
    void ejecutarInstruccion(Instruccion instruccion);
private:
    Programa _programa;
    Pila _pila = Pila();
    Memoria _memoria = Memoria();
    bool _finalizar;
};

#endif
