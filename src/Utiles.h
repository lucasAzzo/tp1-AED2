#ifndef __UTILES_H__
#define __UTILES_H__

#include <vector>
#include <string>

using namespace std;

typedef int Operacion;

const Operacion PUSH = 1;
const Operacion ADD = 2;
const Operacion SUB = 3;
const Operacion MUL = 4;
const Operacion WRITE = 5;
const Operacion READ = 6;
const Operacion JUMP = 7;
const Operacion JUMPZ = 8;

typedef string Id;

typedef vector<class Instruccion> Instrucciones;

#endif /*__UTILES_H__*/
