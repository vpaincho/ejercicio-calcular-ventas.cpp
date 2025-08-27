#include <iostream>
using namespace std;

int main(){
    const int TIRADAS= 50;
    const int MIN_SUMA = 2;
    const int MAX_SUMA = 12;

    int contador[MAX_SUMA + 1] = {0}; //indice 2 a 12

    cout << "Ingrese 50 tiradas de dados (dos valores entre 1 y 6):\n";

    for (int i = 0; i < TIRADAS; i++)
    {
        int dado1, dado2;

        cout << "Tirada #" << i+ 1 << " - Dado 1: ";
        cin >> dado1;
        cout << "Dado 2: ";
        cin >> dado2;

        if (dado1 < 1 || dado1 > 6 || dado2 < 1 || dado2 > 6)
        {
            cout << "Valores invalidos. Ingrese un numero entre 1 y 6.\n";
            i--; // repetir la tirada
            continue;
        }

    int suma = dado1 + dado2;
    contador[suma]++;
        
    }

    cout << "\nResultados:\n";
    for (int i = MIN_SUMA; i <= MAX_SUMA; i++)
    {
        cout << i << " salio " << contador[i] << " veces" << endl;
    }
    
    return 0;
}