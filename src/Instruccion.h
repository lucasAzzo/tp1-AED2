#ifndef __INSTRUCCION_H__
#define __INSTRUCCION_H__

#include <iostream>
#include <vector>

#include "Utiles.h"

class Instruccion {
public:
	// Precondición: la operación es PUSH
	Instruccion(Operacion operacion, int valor);

        // Precondición: la operación es ADD, SUB o MUL
	Instruccion(Operacion operacion);

        // Precondición: la operación es READ, WRITE, JUMP o JUMPZ
	Instruccion(Operacion operacion, Id nombre);

	Operacion operacion() const;

	// Precondición: la operación es PUSH
	int valor() const;

        // Precondición: la operación es READ, WRITE, JUMP o JUMPZ
	Id nombre() const;
private:
	Operacion _operacion;
	int _valor;
	Id _nombre;
};

#endif /*__INSTRUCCION_H__*/

