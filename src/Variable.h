#ifndef VARIABLE_H
#define VARIABLE_H

#include "Utiles.h"

class Variable
{
public:
    Variable(Id nombre, int valor);
    Id devolverNombre() const;
    int devolverValor();
private:
    Id _nombre;
    int _valor;
};

#endif
