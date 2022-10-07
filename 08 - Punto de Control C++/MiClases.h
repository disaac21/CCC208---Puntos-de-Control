#include "Pila.h"
#include<iostream>
#include <string>
#include "MiClase.h"
using namespace std;

void MiClases() {
    Pila<MiClase> mcPila;
    const size_t mcPilaTam = 10;
    cout << "\n--> Insertar elementos en mcPila\n";
    for (size_t i = 0; i < mcPilaTam; ++i) {
        string stringTemp = "MC" + to_string(i);
        MiClase mcTemp(stringTemp);
        mcPila.insertar(mcTemp);
        cout << stringTemp << ' ';
    }
    cout << "\n<-- Extraer elementos de mcPila\n";
    while (!mcPila.estaVacia()) {
        cout << mcPila.arriba() << ' ';
        mcPila.extraer();
    }
}