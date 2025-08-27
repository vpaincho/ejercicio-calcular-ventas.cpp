#include <iostream>
using namespace::std;

int main(){
    int a, b, c;
    int mayor, menor;

    cout << "Ingrese tres valores enteros: ";
    cin >> a >> b >> c;

    mayor = menor = a;

    if (b > mayor)
    {
        mayor = b;
    }

    if (c > mayor)
    {
        mayor = c;
    }

    if (b < menor)
    {
        menor = b;
    }
    
    if (c < menor)
    {
        menor = c;
    }
    
    cout << "El valor mayor es: " << mayor << endl;
    cout << "El valor menor es: " << menor << endl;

    return 0;


    
    
}