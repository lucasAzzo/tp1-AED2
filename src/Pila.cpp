#include "Pila.h"

void Pila::apilar(Pila &pila, int elemento) {
    pila._elementos.push_back(elemento);
}

int Pila::desapilar(Pila &pila) {
    int indexUltimo = pila._elementos.size() -1;
    int ultimo = pila._elementos[indexUltimo];
    return ultimo;
}