#include <iostream>
using namespace::std;
#include <math.h>


int main(){

    cout << "Numero\tCuadrado\tCubo: " << endl;

    for (int i = 0; i <= 10; i++)
    {
        // int cuadrado = i * i;
        // int cubo = i * i * i;

        int cuadrado = pow(i, 2);
        int cubo = pow(i, 3);

        cout << i << "\t" << cuadrado << "\t\t" << cubo << endl;
    }
    
    return 0;
}