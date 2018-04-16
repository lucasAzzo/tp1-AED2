#include "gtest/gtest.h"
#include "../src/Calculadora.h"

TEST(test_calculadora, programa1){
    Programa programa = Programa();
    programa.agregarInstruccion("A", Instruccion(READ, "X"));
    programa.agregarInstruccion("A", Instruccion(PUSH, 2));
    programa.agregarInstruccion("A", Instruccion(ADD));
    programa.agregarInstruccion("A", Instruccion(WRITE, "Y"));
    programa.agregarInstruccion("B", Instruccion(PUSH, 2));
    programa.agregarInstruccion("B", Instruccion(READ, "X"));
    programa.agregarInstruccion("A", Instruccion(MUL));
    programa.agregarInstruccion("A", Instruccion(WRITE, "X"));
    programa.agregarInstruccion("A", Instruccion(JUMP, "A"));

    Calculadora calculadora = Calculadora(programa);
    EXPECT_EQ(6, calculadora.valorVariable("Y"));


}