#ifndef UTILES_H
#define UTILES_H

#include <vector>
#include <string>
#include "Pila.h"
#include "Rutina.h"

using namespace std;

typedef string Id;
typedef int Operacion;
const Operacion PUSH = 1;
const Operacion ADD = 2;
const Operacion SUB = 3;
const Operacion MUL = 4;
const Operacion WRITE = 5;
const Operacion READ = 6;
const Operacion JUMP = 7;
const Operacion JUMPZ = 8;

class Utiles {
public:
    void push(Pila pila, int valor);
    void add(Pila pila);
    void sub(Pila pila);
    void mul(Pila pila);
    void write(Pila pila);
    void read(Pila pila);
    void jump(Rutina rutina);
    void jumpz(Rutina rutina);
private:
    Pila _pila;
    int _valor;
    Rutina _rutina;
};

#endif
