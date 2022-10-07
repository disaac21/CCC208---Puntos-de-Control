#include <iostream>
using namespace std;

enum Fecha { year, month, day, hour, minute, second };

class F {
    public:
        F(int a = 1900, int m = 1, int d = 1, int h = 4, int min = 30, int seg = 10) {
            this->yearm = a; this->monm = m; this->diam = d; this->horm = h; this->minm = min; this->secm = seg;
        }

        F operator++() {
            switch (InputEntry) {
                case year: ++yearm; break; case month: ++monm; break; case day: ++diam; break; case hour: ++horm; break; case minute: ++minm; break; case second: ++secm; break;
            }
            return *this;
        }
        F &operator++(int) { 
            switch (InputEntry) {
                case year: yearm++; break; case month: monm++; break; case day: diam++; break; case hour: horm++; break; case minute: minm++; break; case second: secm++; break;
            }
            return *this;
        }

        F operator--() {
            switch (InputEntry) {
                case year: --yearm; break; case month: --monm; break; case day: --diam; break; case hour: --horm; break; case minute: --minm; break; case second: --secm; break;
            }
            return *this;
        }
        F &operator--(int) {
            switch (InputEntry) {
                case year: yearm--; break; case month: monm--; break; case day: diam--; break; case hour: horm--; break; case minute: minm--; break; case second: secm--; break;
                }
            return *this;
        } 
         
        void setEnum(Fecha dato) {
            this->InputEntry = dato;
        }

        void operator-(F SecondDate) {
            F FechaIn; int mes = 0, dia = 0, hora = 0, min = 0, seg = 0;

            if (yearm-SecondDate.yearm >= 0) {
                FechaIn.yearm = yearm-SecondDate.yearm;

                if (monm-SecondDate.monm < 1) {
                    FechaIn.monm = 12 - (SecondDate.monm-monm); mes = 12 - (SecondDate.monm-monm);
                } else {
                    FechaIn.monm = monm-SecondDate.monm;
                }

                if (dia-SecondDate.diam < 1) {
                    //30 -> Abr, Jun, Sep, Nov (4) & 31 -> Jan, Mar, May, Jul, Aug, Oct, Dec (7)
                    if (FechaIn.monm-1 == 4 || FechaIn.monm-1 == 6 || FechaIn.monm-1 == 9 || FechaIn.monm-1 == 11) {
                        FechaIn.diam = 30 - (SecondDate.diam-dia); dia = 30 - (SecondDate.diam-dia);
                    } else {
                        FechaIn.diam = 31 - (SecondDate.diam-dia); dia = 31 - (SecondDate.diam-dia);
                    }
                } else {
                    FechaIn.diam = dia-SecondDate.diam;
                }

                if (horm-SecondDate.horm < 1) {
                    FechaIn.horm = 24 - (SecondDate.horm-horm); hora = horm-SecondDate.horm;
                } else {
                    FechaIn.horm = horm-SecondDate.horm;
                }

                if (min-SecondDate.minm < 0) {
                    FechaIn.minm = 60 - (SecondDate.minm-min); min = 60 - (SecondDate.minm-min);
                } else {
                    FechaIn.minm = min-SecondDate.minm;
                }
                
                if (seg-SecondDate.secm < 0) {
                    FechaIn.secm = 60 - (SecondDate.secm-seg); seg = 60 - (SecondDate.secm-seg);
                } else {
                    FechaIn.secm = seg-SecondDate.secm;
                }

                cout << endl << "Diferencia entre las fechas" << endl << "Anio: " << FechaIn.yearm << "\nMes: " << FechaIn.monm << "\nDia: " << FechaIn.diam << "\nHora: " << FechaIn.horm << "\nMinutos: " << FechaIn.minm << "\nSegundos: " << FechaIn.secm << endl;
            } else {
                cout << "\nLa primera fecha debe ser mayor que la segunda.\n";
            }
        }
    private:
        friend int main();
        Fecha InputEntry = day; int monm, diam, yearm, horm, minm, secm;
};

int main() {
    F FechaMostrando;
    F FechaPred1(2022, 9, 23, 8, 50, 35); F FechaPred2(2004, 4, 21, 11, 35, 55);
    cout << "\nFecha 1:" << "\nAnio: " << FechaPred1.yearm << "\nMes: " << FechaPred1.monm << "\nDia: " << FechaPred1.diam << "\nHora: " << FechaPred1.horm << "\nMinutos: " << FechaPred1.minm << "\nSegundos: " << FechaPred1.secm << "\n";
    cout << "\nFecha 2:" << "\nAnio: " << FechaPred2.yearm << "\nMes: " << FechaPred2.monm << "\nDia: " << FechaPred2.diam << "\nHora: " << FechaPred2.horm << "\nMinutos: " << FechaPred2.minm << "\nSegundos: " << FechaPred2.secm << "\n";
    FechaPred1-FechaPred2; 
    return 0;
}