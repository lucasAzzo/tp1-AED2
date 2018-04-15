//
// Created by lucas on 4/15/18.
//

#include "Calculadora.h"

Calculadora::Calculadora(Programa programa) {
    _programa = programa;
}

void Calculadora::asignarVariable(Id idVariable, int valor) {
    _id = idVariable;
    _valor = valor;
}

void Calculadora::ejecutar(Id idRutina) {

}

int Calculadora::valorVariable(Id idVariable) const {

}
