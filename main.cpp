#include "Racional.h"
#include <iostream>

int main(){
    Racional r1(20,30);
    Racional r2(20,15);
    Racional r3(20,2);
    Racional r4;
    Racional r5;
    Racional r6;
    
    std::cout<<"Flotante-1"<<std::endl;
    r1.imprimir_flotante();
    std::cout<<"Flotante-2"<<std::endl;
    r2.imprimir_flotante();
    std::cout<<"Flotante-3"<<std::endl;
    r3.imprimir_flotante();
    r1= r1+r2+r3;
    r4=r1*r3;
    r5=r4-r2;
    r6=r5/r2;
    std::cout<<"Fraccion-1"<<std::endl;
    r1.imprimir_fraccion();
    std::cout<<"Fraccion-2"<<std::endl;
    r2.imprimir_fraccion();
    std::cout<<"Fraccion-3"<<std::endl;
    r3.imprimir_fraccion();
    std::cout<<"Fraccion-4"<<std::endl;
    r4.imprimir_fraccion();
    std::cout<<"Fraccion-5"<<std::endl;
    r5.imprimir_fraccion();
    std::cout<<"Fraccion-6"<<std::endl;
    r6.imprimir_fraccion();
    std::cout<<"Flotante-4"<<std::endl;
    r4.imprimir_flotante();
    std::cout<<"Flotante-5"<<std::endl;
    r5.imprimir_flotante();
    std::cout<<"Flotante-6"<<std::endl;
    r6.imprimir_flotante();

    
}