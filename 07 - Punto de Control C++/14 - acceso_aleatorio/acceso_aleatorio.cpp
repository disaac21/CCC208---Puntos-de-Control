#include <iostream> // acceso_aleratorio.cpp
#include <fstream>
#include <cstdlib>
#include "Contacto.h"
#include "Operaciones.h"
using namespace std;

int main() {
    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary );

    Operaciones operacion(fcont);

    operacion.escribir_o_leer(true);
    cout << "ANTES:" << endl;
    operacion.escribir_o_leer(false);
    cout << endl << "CAMBIOS:" << endl;
    operacion.cambios();
    cout << endl << "DESPUES:" << endl;
    operacion.escribir_o_leer(false);
    fcont.close();

    getchar();
}