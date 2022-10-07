#pragma once
#include <iostream>
#include <fstream>
#include "Contacto.h"
using namespace std;

class Operaciones {
    
    private:
        fstream fcont;
    
    public:
        Operaciones(fstream&);
        void escribir_o_leer(bool);
        void leer_el_3(Contacto&);
        void escribir_el_3(Contacto&);
        void cambios(); 
};