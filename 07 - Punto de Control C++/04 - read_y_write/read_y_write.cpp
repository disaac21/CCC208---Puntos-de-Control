#include <iostream>
using namespace std;

int main () {

    const int TAMANIO = 80;
    char buffer [TAMANIO];

    cout << "Escriba un enunciado:" << endl;
    cin.read(buffer, 12);
    cout << endl << "El Enunciado Que Escribio Fue: " << endl << "(";
    cout.write(buffer, cin.gcount() );
    cout << ")" << endl;

    cout << "gcount: " << cin.gcount() << endl;

    buffer[cin.gcount()] = '\0';
    buffer[0] = '\0';
    cout <<  "buffer: " << buffer << endl;

    getchar();
}