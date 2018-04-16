#ifndef RUTINA_H
#define RUTINA_H

#include "Instruccion.h"

class Rutina {
public:
    Rutina(Id id, std::vector<Instruccion> instrucciones);
    std::vector<Instruccion> devolverInstrucciones() const;
    Id devolverId() const ;
    void agregarInstruccion(Instruccion instruccion);
private:
    Id _id;
    std::vector<Instruccion> _instrucciones;
};

#endif