#ifndef MEMORIA_H
#define MEMORIA_H

#include <vector>
#include "Variable.h"

class Memoria
{
public:
    void agregarVariable(Variable variable);
    bool existeVariable(Id nombre) const;
    int direccionDeMemoria(Id idVariable) const; //PRE: la variable esta en memoria
    Variable devolverVariable(int direccion) const; //PRE: la variable esta en memoria
private:
    std::vector<Variable> _elementos;
};

#endif
