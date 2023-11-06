#include "calculadora.h"

NRacional Calculadora::operacion(NRacional num1, NRacional num2, char operador)
{
    NRacional resultado;

    switch (operador)
    {
    case '+':
        resultado = num1.suma(num2);
        break;
    case '-':
        resultado = num1.resta(num2);
        break;
    case '*':
        resultado = num1.multi(num2);
        break;
    case '/':
        resultado = num1.divi(num2);
        break;
    case '$':
        resultado = num1.compara(num2);
        break;
    default:
        break;
    }

    return resultado;
}

