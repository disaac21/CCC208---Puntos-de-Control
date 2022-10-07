#include "Pila.h"
#include<iostream>
using namespace std;

void Enteros() {
    Pila<int> intPila;
    const size_t intPilaTam = 10;
    int intValor = 1;
    cout << "\n--> Insertar elementos en intPila\n";
    for (size_t i = 0; i < intPilaTam; ++i) {
        intPila.insertar(intValor);
        cout << intValor++ << ' ';
    }
    cout << "\n<-- Extraer elementos de intPila\n";
    while (!intPila.estaVacia()) {
        cout << intPila.arriba() << ' ';
        intPila.extraer();
    }
}