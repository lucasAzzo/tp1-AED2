#include "Rutina.h"

Rutina::Rutina(Id id, Instrucciones instrucciones){
    _id = id;
    _instrucciones = instrucciones;
}


Instrucciones Rutina::devolverInstrucciones(Id id) {
    Instrucciones i;
    /* aca en el for habria q definir una funcion que busque las instruccion por nombre de instruccion (Id id) y dps solo hay que hacer push_back a Instruccion i y listo */
    for (int j = 0; j < /* buscarInstrucciones(id).size() */; ++j) {
        /*i.push_back( y aca agrego la instruccion);*/
    }
    return i;
}