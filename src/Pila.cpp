#include "Pila.h"

void Pila::apilar(Pila &pila, int elemento) {
    pila._elementos.push_back(elemento);
}

/* Estaria bueno pero no se si es posible , asignarle de alguna forma al apilar y desapilar alguna de las operaciones que definimos en UTILES.cpp
 * es decir, ya cuando apilamos o desapilamos, hacer en ese mismo momento la operacion que nos llegue por parametro. */

/* ESTA FUNCION NO DEBERIA DEVOLVER EL PRIMER ELEMENTO O NO EL ULTIMO ? de modo que despues podamos ir haciendo las operaciones de sub mul etc etc llamando a esta funcion */
int Pila::desapilar(Pila &pila) {
    /* creo que aca habria que chequear si el size de la pila es mayor o igual a 1, sino se puede indefinir, ej pila[-1] */
    int indexUltimo = pila._elementos.size() -1;
    int ultimo = pila._elementos[indexUltimo];
    return ultimo;
}
