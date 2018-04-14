#ifndef INSTRUCCION_H
#define INSTRUCCION_H
#include "Utiles.h"

class Instruccion {
public:
    // --------------------------------CONSTRUCTORES---------------------
    Instruccion(Operacion operacion, int valor); //PRE: la operacion es PUSH
    Instruccion(Operacion operacion); //PRE: la operación es ADD, SUB o MUL
    Instruccion(Operacion operacion, Id nombre); //PRE: la operación es READ, WRITE, JUMP o JUMPZ
    // --------------------------------OTROS METODOS-----------------------
    Operacion operacion() const;
    int valor() const; //PRE: la operacion es PUSH
    Id nombre() const; //PRE: la operación es READ, WRITE, JUMP o JUMPZ
private:
    Operacion _operacion;
    int _valor;
    Id _nombre;
};

#endif