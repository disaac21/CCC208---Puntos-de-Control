#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

    ifstream archivoClientesEntrada( "clientes.txt", ios::in );
    if ( !archivoClientesEntrada ) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit( EXIT_FAILURE );
    }
    
    //int cuenta; string nombre; double saldo;
    string cuenta; string nombre; string saldo;
    cout << left << setw( 10 ) << "Cuenta" << setw( 10 ) << "Nombre" << "Saldo" << endl << fixed << showpoint;
    cout << left << setw(10) << "---------" << setw(10) << "---------" << "---------" << endl << fixed << showpoint;

    while ( archivoClientesEntrada >> cuenta >> nombre >> saldo )
        cout << left << setw( 10 ) << cuenta << setw( 10 ) << nombre << setw( 7 ) << setprecision( 2 ) << right << saldo << endl;
        
    getchar();
}
