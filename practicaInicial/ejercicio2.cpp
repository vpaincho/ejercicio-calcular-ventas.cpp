#include <iostream>
using namespace ::std;

int main(){
    float num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2; 

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;

    if (num2 != 0){
        cout << "Division: " << num1 / num2 << endl;
    }
    else
    {
        cout << "No se puede dividir por cero." << endl;
    }
    

    return 0;
}