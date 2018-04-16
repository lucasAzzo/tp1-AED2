#include "Calculadora.h"

Calculadora::Calculadora(Programa programa) {
    _programa = programa;
    _pila = {};
    _memoria = {};
    _finalizar = 0;
}

void Calculadora::ejecutar(Id idRutina) {
    while(!_finalizar){
        if (!_programa.esRutinaExistente(idRutina)){
            _finalizar = true;
        }else{
            for (int j = 0; j < _programa.longitud(idRutina); j++) {
                ejecutarInstruccion(_programa.instruccion(idRutina, j));
            }
        }
    }
}

void Calculadora::asignarVariable(Id idVariable, int valor) {
    _pila.apilar(valor);
    Instruccion instruccion = Instruccion(WRITE, valor);
    ejecutarInstruccion(instruccion);
}
int Calculadora::valorVariable(Id idVariable) const {
    int result = 0;
    if(_memoria.existeVariable(idVariable)){
        int direccionVariable = _memoria.direccionDeMemoria(idVariable);
        result = _memoria.devolverVariable(direccionVariable).devolverValor();
    }
    return result;
}

// defino el comportamiento de las instrucciones
void Calculadora::ejecutarInstruccion(Instruccion instruccion){
    if (instruccion.operacion() == PUSH)
    {
        _pila.apilar(instruccion.valor());
    }
    if (instruccion.operacion() == ADD)
    {
        int x = _pila.desapilar();
        int y = _pila.desapilar();
        _pila.apilar(x + y);
    }
    if (instruccion.operacion() == SUB)
    {
        int x = _pila.desapilar();
        int y = _pila.desapilar();
        _pila.apilar(x - y);
    }
    if (instruccion.operacion() == MUL)
    {
        int x = _pila.desapilar();
        int y = _pila.desapilar();
        _pila.apilar(x * y);
    }
    if (instruccion.operacion() == WRITE)
    {
        Variable variable = Variable(instruccion.nombre(), _pila.desapilar());
        _memoria.agregarVariable(variable);
    }
    if (instruccion.operacion() == READ)
    {
        if (_memoria.existeVariable(instruccion.nombre())){
            int direccionVariable = _memoria.direccionDeMemoria(instruccion.nombre());
            Variable variable = _memoria.devolverVariable(direccionVariable);
            _pila.apilar(variable.devolverValor());
        }else{
            _pila.apilar(0);
        }
    }
    if (instruccion.operacion() == JUMP)
    {
        if(_programa.esRutinaExistente(instruccion.nombre()))
            ejecutar(instruccion.nombre());
        else
            _finalizar = true;
    }
    if (instruccion.operacion() == JUMPZ)
    {
        if (_pila.desapilar() == 0){
            Instruccion proximaInstruccion = Instruccion(JUMP, instruccion.nombre());
            ejecutarInstruccion(proximaInstruccion);
        }
    }
}