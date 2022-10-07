#pragma once
#include <iostream>
#include <string>
using namespace std;

class MiClase {
    string Nombre;
    
    public:
    MiClase(string Nombre) {
        this ->Nombre = Nombre;
    }
    string obtenerNombre() {
        return Nombre;
    }
    friend ostream &operator<<(ostream &out, const MiClase &mc);
};
ostream &operator<<(ostream &out, const MiClase &mc) {
    return out << mc.Nombre;
}