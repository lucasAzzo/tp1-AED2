#include "gtest/gtest.h"
#include "../src/Calculadora.h"

TEST(test_calculadora, programa1){
    Programa programa = Programa();
    programa.agregarInstruccion("A", Instruccion(READ, "X"));
    programa.agregarInstruccion("A", Instruccion(PUSH, 2));
    programa.agregarInstruccion("A", Instruccion(ADD));
    programa.agregarInstruccion("A", Instruccion(WRITE, "Y"));

    Calculadora calculadora = Calculadora(programa);
    calculadora.ejecutar("A");
    EXPECT_EQ(2, calculadora.valorVariable("Y"));
}

TEST(test_calculadora, programa2){
    Programa programa = Programa();
    programa.agregarInstruccion("A", Instruccion(READ, "X"));
    Calculadora calculadora = Calculadora(programa);
    EXPECT_EQ(0, calculadora.valorVariable("x"));
}

TEST(test_calculadora, programa3){
    Programa programa = Programa();
    programa.agregarInstruccion("A", Instruccion(READ, "X"));
    programa.agregarInstruccion("A", Instruccion(PUSH, 2));
    programa.agregarInstruccion("A", Instruccion(ADD));
    programa.agregarInstruccion("A", Instruccion(WRITE, "Y"));
    Calculadora calculadora = Calculadora(programa);
    calculadora.ejecutar("A");
    EXPECT_EQ(2, calculadora.valorVariable("Y"));
}

TEST(test_calculadora, programa4){
    Programa programa = Programa();
    programa.agregarInstruccion("A", Instruccion(READ, "X"));
    programa.agregarInstruccion("A", Instruccion(PUSH, 2));
    programa.agregarInstruccion("A", Instruccion(ADD));
    programa.agregarInstruccion("A", Instruccion(WRITE, "Y"));
    programa.agregarInstruccion("B", Instruccion(PUSH, 2));
    programa.agregarInstruccion("B", Instruccion(READ, "X"));
    programa.agregarInstruccion("B", Instruccion(MUL));
    programa.agregarInstruccion("B", Instruccion(WRITE, "X"));
    programa.agregarInstruccion("B", Instruccion(JUMP, "A"));

    Calculadora calculadora = Calculadora(programa);
    calculadora.ejecutar("B");
    EXPECT_EQ(0, calculadora.valorVariable("X"));
    EXPECT_EQ(2, calculadora.valorVariable("Y"));
}