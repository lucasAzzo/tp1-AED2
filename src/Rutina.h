#ifndef RUTINA_H
#define RUTINA_H

#include "Instruccion.h"

class Rutina {
public:
    Rutina(Id id, vector<Instruccion> instrucciones);
    vector<Instruccion> devolverInstrucciones() const;
    Id devolverId() const ;
    void agregarInstruccion(Instruccion instruccion);
private:
    Id _id;
    vector<Instruccion> _instrucciones;
};

#endif