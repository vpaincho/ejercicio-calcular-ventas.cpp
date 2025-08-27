#include <iostream>
#include <iomanip>
using namespace ::std;

int main(){
    const int MAX = 25;
    int N;
    
    cout << fixed << setprecision(2); //mostrar deciales lindos

    cout << "Ingrese la cantidad de elementos (menor a 25): ";
    cin >> N;

    if (N <= 0 || N >= MAX)
    {
        cout << "N debe ser mayor a 0 y menor a 25.\n";
        return 1;
    }

    float A[MAX], B[MAX];

    cout << "Ingrese los valores del vector A:\n";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cout << "Ingrese los valores del vector B:\n";
    for (int i = 0; i < N; i++) {
    cin >> B[i];
    }

    
 //Vector C: intercalar pares de A y pares de B
    float C[MAX * 2]; //tamno max posible
    int posC = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 != 0) //impar
        {
            C[posC++] = A[i];
        }
        if (i % 2 == 0) //par
        {
            C[posC++] = B[i];
        } 
    }

    cout << "\nVector C (intercalado A impar + B par):\n";
    for (int i = 0; i < posC; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

//Vector D: 0 si A[i] == B[i], 1 si son distintos
    int D[MAX];
    for (int i = 0; i < N; i++)
    {
        D[i] = (A[i] == B[i]) ? 0 : 1;
    }
    cout << "\nVector D:\n";
    for (int i = 0; i < N; i++)
    {
        cout << D[i] << " ";
    }
    cout << endl;


    return 0;   

}