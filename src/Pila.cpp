#include "Pila.h"

Pila::Pila() {
    _elementos = {};
}

void Pila::apilar(int elemento) {
    _elementos.push_back(elemento);
}

int Pila::desapilar() {
    int result;
    if (_elementos.size() == 0)
    {
        result = 0;
    }
    else
    {
        int indexUltimo = _elementos.size() -1;
        int ultimo = _elementos[indexUltimo];
        result = ultimo;
        _elementos.pop_back();
    }
    return result;
}
