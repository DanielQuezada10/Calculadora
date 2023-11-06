#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "nracional.h"
#include "calculadora.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    NRacional r1(3, 2);
    NRacional r2(-5, -8);

    qInfo() << "Un numero racional : " << r1.toString();
    qInfo() << "Un numero racional : " << r2.toString();

    char operador;
    qInfo() << "Ingrese el operador (+, -, *, /, $): ";
    std::cin >> operador;

    NRacional resultado = Calculadora::operacion(r1, r2, operador);
    qInfo() << "Resultado de la operacion: " << resultado.toString();

    return a.exec();
}
