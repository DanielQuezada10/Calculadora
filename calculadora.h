#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "nracional.h"

class Calculadora
{
public:
    static NRacional operacion(NRacional num1, NRacional num2, char operador);
};

#endif // CALCULADORA_H
