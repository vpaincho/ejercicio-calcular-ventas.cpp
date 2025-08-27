#include <iostream>
using namespace::std;

int main(){

    // Dialogo con el usuario
    int num1, num2, num3;
    cout << "Escriba tres numeros separados por espacios: " << endl;
    cin >> num1 >> num2 >> num3;

    // Calculos
    int suma = num1 + num2 + num3;
    double promedio = suma / 3.0;
    int producto = num1 * num2 * num3;

    // Determinar el mayor
    int mayor = num1;
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    // Determinar el menor 
    int menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    // Mostrar resultados
    cout << "Resultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Producto: " << producto << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

return 0;
    
}