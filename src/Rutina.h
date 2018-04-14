#ifndef __RUTINA_H__
#define __RUTINA_H__
#include "Utiles.h"
#include "Instruccion.h"

class Rutina 
{
    public:
        Rutina(Utiles::Id id, Utiles::Instrucciones instrucciones);
        Instrucciones devolverInstrucciones(Rutina rutina);

    private:
        Id _id;
        Instrucciones _instrucciones;
};

#endif