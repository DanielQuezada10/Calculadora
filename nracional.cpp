#include <sstream>
#include <iomanip>
#include "nracional.h"

NRacional::NRacional(int numerador, int denominador)
{
    denominador=denominador==0?       1: denominador;
    this->denominador=denominador<0?  -denominador : denominador;
    this->numerador=denominador<0?    -numerador : numerador;
}

QString NRacional::toString()
{
    std::ostringstream generador;
    generador << numerador << "/" << denominador;

    QString cadena(generador.str().c_str());
    return cadena;
}

NRacional NRacional::suma(NRacional otro)
{
    int numeradorResultadoS   = this->numerador * otro.denominador +
                                denominador * otro.numerador;
    int denominadorResultadoS = denominador * otro.denominador;
    NRacional resultadosuma(numeradorResultadoS, denominadorResultadoS);
    return resultadosuma;
}

NRacional NRacional::resta(NRacional otro)
{
    int numeradorResultadoR   = this->numerador * otro.denominador -
                                denominador * otro.numerador;
    int denominadorResultadoR = denominador * otro.denominador;
    NRacional resultadoresta(numeradorResultadoR, denominadorResultadoR);
    return resultadoresta;
}

NRacional NRacional::multi(NRacional otro)
{
    int numeradorResultadoM   = this->numerador * otro.numerador;
    int denominadorResultadoM = denominador * otro.denominador;
    NRacional resultadomulti(numeradorResultadoM, denominadorResultadoM);
    return resultadomulti;
}

NRacional NRacional::divi(NRacional otro)
{
    int numeradorResultadoD   = this->numerador * otro.denominador;
    int denominadorResultadoD = denominador * otro.numerador;
    NRacional resultadodivi(numeradorResultadoD, denominadorResultadoD);
    return resultadodivi;
}

NRacional NRacional::compara(NRacional otro){

    float numeroUnoResultado = this->numerador / denominador;
    float numeroDosResultado = otro.numerador / otro.denominador;

    if(numeroUnoResultado>numeroDosResultado){
        qInfo()<< "El primer numero es mayor que el segundo ";
        NRacional resultadoimm(numerador, denominador);
        return resultadoimm;
    }
    else if(numeroDosResultado>numeroUnoResultado){
        qInfo()<< "El segundo numero es mayor que el primero ";
        NRacional resultadoimm(otro.numerador, otro.denominador);
        return resultadoimm;
    }
    else{
        qInfo()<< "Ambos numeros son iguales: ";
        NRacional resultadoimm(numerador, denominador);
        return resultadoimm;
    }
}
