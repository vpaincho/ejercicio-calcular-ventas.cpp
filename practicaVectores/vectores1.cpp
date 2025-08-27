#include <iostream>
using namespace ::std;

int main(){
    int N;

    cout << "Ingrese la cantidad de pares (menor a 30): ";
    cin >> N;

    if (N < 30 && N > 0)
    {
        int VEC[N];

        for (int i = 0; i < N; i++)
        {
            VEC[i] = i * 2;
        }

        cout << "Vector de numeros pares: ";
        for (int i = 0; i < N; i++)
    {
        cout << VEC[i] << " ";
    }
    cout << endl;

    } else {
        cout << "Error: N debe ser un valor entre 1 y 29." << endl;
    }

    return 0;


}