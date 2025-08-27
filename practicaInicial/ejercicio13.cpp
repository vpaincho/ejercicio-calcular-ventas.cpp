#include <iostream>
using namespace::std;

int main(){
    int valor;
    float quinta, tercera;
    int resto;

//Entrada de datos 
    cout << "Ingrese un valor entero: ";
    cin >> valor;


//Calculos
    quinta = valor / 5.0;
    resto = valor % 5;
    tercera = quinta / 3.0;

//Salida
    cout << "La quinta parte de " << valor << " es: " << quinta << endl;
    cout << "El resto de dividir " << valor << " por 5 es: " << resto << endl;
    cout << "La tercera parte de la quinta parte es: " << tercera << endl;

    return 0;


}