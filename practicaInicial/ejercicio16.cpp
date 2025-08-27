#include <iostream>
using namespace::std;

// Persona A: dia1, mes1, anio1
// Persona B: dia2, mes2, anio2

// Si anio1 < anio2 - Persona A es mayor
// Si anio1 > anio2 - Persona B es mayor
// Si anio1 == anio2:
//     - Si mes1 < mes2 - Persona A es mayor
//     - Si mes1 > mes2 - Persona B es mayor
//     - Si mes1 == mes2:
//         - Si dia1 < dia2 - Persona A es mayor
//         - Si dia1 > dia2 - Persona B es mayor
//         - Si dia1 == dia2 - Nacieron el mismo día

        int main() {
            int dia1, mes1, anio1;
            int dia2, mes2, anio2;
        
            // Entrada de datos
            cout << "Ingrese la fecha de nacimiento de la persona A (dia mes anio): ";
            cin >> dia1 >> mes1 >> anio1;
        
            cout << "Ingrese la fecha de nacimiento de la persona B (dia mes anio): ";
            cin >> dia2 >> mes2 >> anio2;
        
            // Comparación
            if (anio1 < anio2) {
                cout << "La persona A es mayor." << endl;
            } else if (anio1 > anio2) {
                cout << "La persona B es mayor." << endl;
            } else {
                // Años iguales
                if (mes1 < mes2) {
                    cout << "La persona A es mayor." << endl;
                } else if (mes1 > mes2) {
                    cout << "La persona B es mayor." << endl;
                } else {
                    // Meses iguales
                    if (dia1 < dia2) {
                        cout << "La persona A es mayor." << endl;
                    } else if (dia1 > dia2) {
                        cout << "La persona B es mayor." << endl;
                    } else {
                        cout << "Ambas personas nacieron el mismo dia." << endl;
                    }
                }
            }
        
            return 0;
        }