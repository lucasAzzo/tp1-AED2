#ifndef PILA_H
#define PILA_H

#include <vector>

class Pila  {
public:
    Pila(); //crear una pila vacia
    void apilar(int elemento); //apilar un elemento
    int desapilar(); //saca el ultimo elemento de la pila y lo devuelve
private:
    std::vector<int> _elementos;
};

#endif