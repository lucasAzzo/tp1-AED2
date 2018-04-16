#include "Programa.h"

Programa::Programa() {
    _rutinas = {};
}

void Programa::agregarInstruccion(Id idRutina, Instruccion instruccion) {
    if (esRutinaExistente(idRutina))
    {
        int i = 0;
        while (i < _rutinas.size() && _rutinas[i].devolverId() != idRutina)
            i++;
        _rutinas[i].agregarInstruccion(instruccion);
    }
    else
    {
        std::vector<Instruccion> instrucciones;
        instrucciones.push_back(instruccion);
        Rutina nuevaRutina = Rutina(idRutina, instrucciones);
        _rutinas.push_back(nuevaRutina);
    }
}

bool Programa::esRutinaExistente(Id idRutina) const {
    bool result = false;
    int i = 0;
    while (i < _rutinas.size() && _rutinas[i].devolverId() != idRutina)
        i++;
    if (i < _rutinas.size())
        result = true;
    return result;
}

int Programa::longitud(Id idRutina) const {
    int i = 0;
    while (i < _rutinas.size() && _rutinas[i].devolverId() != idRutina)
        i++;
    const int result = (const int)this->_rutinas[i].devolverInstrucciones().size();
    return result;
}


Instruccion Programa::instruccion(Id idRutina, int i) const {
    int j = 0;
    while (j < _rutinas.size() && _rutinas[j].devolverId() != idRutina)
        j++;
    Instruccion result = _rutinas[j].devolverInstrucciones()[i];
    return result;
}


