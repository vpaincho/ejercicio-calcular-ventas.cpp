#include <iostream>
using namespace::std;

int main(){
    
    int fechaCumple;

    cout << "Ingrese la fecha de su cumple en formato AAAAMMDD: " << endl;
    cin >> fechaCumple;

    if (fechaCumple < 10000000 || fechaCumple > 99999999)
    {
        cout << "Error. La fecha fue erroneamente ingresada." << endl;

        return 1;
    }

    int anio = fechaCumple / 10000;
    int resto = fechaCumple % 1000;
    int mes = resto / 100;
    int dia = fechaCumple % 100;

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        cout << "Error: fecha inválida (mes o día fuera de rango)." << endl;
        return 1;
    }

    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;
 
    
    return 0;

}