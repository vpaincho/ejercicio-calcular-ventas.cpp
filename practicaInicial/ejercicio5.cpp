#include <iostream>
using namespace::std;
#include <math.h>

int main(){

    double radio;

    cout << "Escriba un numero que represente el radio de un circulo: " << endl;
    cin >> radio;

    // La funcion de pi es M_PI
    double diametro = 2 * radio;
    double circunferencia = 2 * M_PI * radio;
    double area = M_PI * pow(radio, 2);
    
    cout << "El radio " << radio << " tiene: " << endl;
    cout << " Diametro: " << diametro;
    cout << " Circunferencia: " << circunferencia;
    cout << " Area: " << area << endl;

    return 0;


}