#include <iostream>
using namespace::std;

int main(){

    int a, b;

    //Entrada con validacion
    cout << "Ingrese el primer numero entero positivo: ";
    cin >> a;

    cout << "Ingrese el segundo numero entero positivo: ";
    cin >> b;

    // Validacion de precondiciones
    if (a <= 0 || b <= 0)
    {
        cout << "Error: ambos numeros deben ser positivos." << endl;

        return 1;
    }
   

    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Producto: " << a * b << endl;
    

    if (a != 0 || b !=0)
    {
        int division = a / b;
        cout << "Division: " << division << endl;
    } else {
        cout << "Error: no se puede dividir por cero." << endl;

        return 1;
    }
    return 0;
}