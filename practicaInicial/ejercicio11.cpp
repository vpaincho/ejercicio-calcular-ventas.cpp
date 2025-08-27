#include <iostream>
using namespace::std;

int main(){
    int dia, mes, anio;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;

    // Precondiciones 
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || anio < 1000 || anio > 9999)
    {
        cout << "Error: fecha invalida." << endl;

        return 1;
    }

    //Mostrat fecha en formato AAAAMMDD
    cout << "Fecha de cumpleaños: ";
    cout << anio;

    //Agrego cero si el mes o el dia son menores a 10
    if (mes < 10)
    cout << "0";
    cout << mes;

    if (dia < 10)
    cout << "0";
    cout << dia;

    cout << endl;

    
    return 0;
}