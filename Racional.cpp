#include "Racional.h"
#include <iostream>
Racional Racional::operator*(const Racional &other)
{
    numerador *= other.denominador;
    denominador *= other.numerador;
    reducir();
    return *this;
}
Racional Racional::operator/(const Racional &other)
{
    if (denominador != other.denominador)
    {
        denominador *= other.denominador;
        numerador *= other.denominador;
        numerador += other.numerador;
    }
    else
    {
        numerador += other.numerador;
    }
    reducir();
    return *this;
}
Racional Racional::operator+(const Racional &other)
{
    if (denominador != other.denominador)
    {
        denominador *= other.denominador;
        numerador *= other.denominador;
        numerador += other.numerador;
    }
    else
    {
        numerador += other.numerador;
    }
    reducir();
    return *this;
}
Racional Racional::operator-(const Racional &other)
{
    if (denominador != other.denominador)
    {
        denominador *= other.denominador;
        numerador *= other.denominador;
        numerador -= other.numerador;
    }
    else
    {
        numerador -= other.numerador;
    }
    reducir();
    return *this;
}
void Racional::imprimir_flotante()
{
    if (denominador == 0)
    {
        std::cout << "Indefinido" << std::endl;
    }
    reducir();
    resultado = (numerador) / (denominador);
    std::cout << resultado << std::endl;
}
void Racional::imprimir_fraccion()
{
    if (denominador == 0)
    {
        std::cout << "Indefinido" << std::endl;
    }
    reducir();
    std::cout << numerador << "/" << denominador << std::endl;
}
void Racional::reducir()
{
    for (int i = denominador * numerador; i > 1; i--)
    {
        if ((denominador % i == 0) && (numerador % i == 0))
        {
            denominador /= i;
            numerador /= i;
        }
    }
}