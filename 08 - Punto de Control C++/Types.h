#include <iostream>
#include <string>
#include "Pila.h"
using namespace std;

template <typename TIPOD>
void Tipos(const size_t TAMSent, TIPOD TIPODSent, string TIPODatoName) {
    Pila<TIPOD> PilaGlobal;
    int TamanoPila = TAMSent;
    TIPOD PlaceHolderSent = TIPODSent;
    cout << "\n--> Insertar elementos en " << TIPODatoName << "Pila\n";
    int cont = 0;
    string temp = "";
    for (int i = 0; i < TamanoPila; ++i) {
        Sobrecargando(PilaGlobal, PlaceHolderSent, cont, temp);
    }
    cont = 0;
    cout << "\n<-- Extraer elementos de " << TIPODatoName << "Pila\n";
    while (!PilaGlobal.estaVacia()) {
        cout << PilaGlobal.arriba() << ' ';
        PilaGlobal.extraer();
    }
}

void Sobrecargando(Pila<int>&PilaReceive, int&PlaHolReceive, int&cont, string temp) {
    PilaReceive.insertar(PlaHolReceive);
    cout << PlaHolReceive << " ";
    PlaHolReceive += 1;
}

void Sobrecargando(Pila<double>&PilaReceive, double&PlaHolReceive, int&cont, string temp) {
    PilaReceive.insertar(PlaHolReceive);
    cout << PlaHolReceive << " ";
    PlaHolReceive += 1.1;
}

void Sobrecargando(Pila<string>&PilaReceive, string&PlaHolConcatReceive, int&cont, string temp) {
    temp = PlaHolConcatReceive + to_string(cont++);
    PilaReceive.insertar(temp);
    cout << temp << " ";
}

void Sobrecargando(Pila<MiClase>&PilaReceive, MiClase&PlaHolObjectReceive, int&cont, string temp){
    temp = PlaHolObjectReceive.obtenerNombre() + to_string(cont++);
    MiClase ObjInMethod(temp);
    PilaReceive.insertar(ObjInMethod);
    cout << temp << " ";
}