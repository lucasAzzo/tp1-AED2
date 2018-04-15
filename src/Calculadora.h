//
// Created by lucas on 4/15/18.
//

#ifndef CALCULADORA_H
#define CALCULADORA_H

#include "Programa.h"
#include "Utiles.h"


class Calculadora {
public:
    Calculadora(Programa programa);

    void asignarVariable(Id idVariable, int valor);

    void ejecutar(Id idRutina);

    int valorVariable(Id idVariable) const;

private:
    Programa _programa;
    Id _id;
    int _valor;

};


#endif //CALCULADORA_H
