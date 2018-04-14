#ifndef PILA_H
#define PILA_H

#include "Utiles.h"
#include <vector>

using namespace std;

class Pila  {
public:
    Pila(); //crear una pila vacia
    void apilar(Pila &pila, int elemento); //apilar un elemento (push)
    int desapilar(Pila &pila); //agarrar el ultimo elemento de la pila (pop)
private:
    vector<int> _elementos;
};

#endif