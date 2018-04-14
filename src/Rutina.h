#ifndef __RUTINA_H__
#define __RUTINA_H__

#include "Utiles.h"
#include "Instruccion.h"

class Rutina 
{
    public:
        Rutina(Id id, Instrucciones instrucciones);

        /* pongo la funcion como estatica porque c++ me dice que lo haga cuando la uso en PROGRAMA.cpp */
        Instrucciones static devolverInstrucciones(Id id);

    private:
        Id _id;
        Instrucciones _instrucciones;
};

#endif