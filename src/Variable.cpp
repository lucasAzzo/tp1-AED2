#include "Variable.h"

Variable::Variable(Id nombre, int valor) {
    _nombre = nombre;
    _valor = valor;
}

Id Variable::devolverNombre() const {
    return _nombre;
}

int Variable::devolverValor() {
    return _valor;
}