#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <vector>
#include <string>
#include "Rutina.h"

class Programa {
public:
    // Inicialmente no hay ninguna rutina.
    Programa();

    // Agrega una instrucción a la rutina indicada.
    // Si la rutina indicada no existe, crea una nueva rutina
    // con dicho nombre.
    void agregarInstruccion(Id idRutina, Instruccion instruccion);

    // Devuelve True si idRutina representa una rutina existente.
    bool esRutinaExistente(Id idRutina) const;

    // Devuelve la longitud (cantidad de instrucciones) de la rutina
    // indicada.
    //
    // Precondición: esRutinaExistente(idRutina)
    int longitud(Id idRutina) const;

    // Devuelve la i-ésima instrucción de la rutina indicada.
    //
    // Precondición:
    //   esRutinaExistente(idRutina) && 0 <= i && i < longitud(idRutina)
    Instruccion instruccion(Id idRutina, int i) const;

private:
    std::vector<Rutina> _rutinas;
};

#endif

