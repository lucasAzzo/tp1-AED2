#include "Programa.h"

void Programa::agregarInstruccion(Id idRutina, Instruccion instruccion) {
    /* falta ver como incluir instruccion aca y ver si la instruccion existe o no  */
    Rutina r(idRutina, instruccion);
    Rutinas.push_back(r);
}

bool Programa::esRutinaExistente(Id idRutina) const{
    /* falta terminar */
    bool result = false;
    if (){
        return true;
    }
    return result;
}

int Programa::longitud(Id idRutina) const {
    int contador = 0;
    for (int i = 0; i < Rutina::devolverInstrucciones(idRutina).size(); ++i) {
        contador++;
    }
    return contador;
}

Instruccion Programa::instruccion(Id idRutina, int i) const {
    return Rutina::devolverInstrucciones(idRutina)[i];
}