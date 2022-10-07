#include <iostream>
#include <string>
#include "Doubles.h"
#include "Enteros.h"
#include "Cadenas.h"
#include "MiClases.h" 
#include "Types.h"

int main() {
    Tipos(5, 1.1, "double");
    Tipos(10, 1, "int");
    string StringCpp = "C++";
    Tipos(10, StringCpp, "string");
    MiClase ObjMiClase("MC");
    Tipos(10, ObjMiClase, "mc");
    getchar();
}