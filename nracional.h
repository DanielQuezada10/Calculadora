#ifndef NRACIONAL_H
#define NRACIONAL_H
#include <QDebug>
#include <QString>

class NRacional
{
private:
    int numerador{};
    int denominador{};

public:
    NRacional(int=0, int=1);
    inline int getNumerador(){return numerador;}
    inline int getDenominador(){return denominador;}
    QString toString();
    NRacional suma(NRacional);
    NRacional resta(NRacional);
    NRacional multi(NRacional);
    NRacional divi(NRacional);
    NRacional compara(NRacional);
    friend class calculadora;
};

#endif // NRACIONAL_H
