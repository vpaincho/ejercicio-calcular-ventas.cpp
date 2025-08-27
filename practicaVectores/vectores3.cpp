#include <iostream>
using namespace ::std;

int main(){
    const int MAX = 100;
    int vec[MAX];
    int n = 0;    //cantidad de elementos validos 
    
    cout << "Ingrese valores enteros (maximo 100). Finalice con 0: \n";


//Cargar hasta 100 valores o hasta encontrar un 0
    while (n < MAX){
        int valor;
        cin >> valor;
        if (valor == 0) break;
        
        vec[n] = valor;
        n++;
        
    }

    cout << "\nValores ingresados (sin el cero final):\n";
    for (int i = 0; i < n; i++) {
    cout << "[" << i << "] = " << vec[i] << endl;
    }


    if (n == 0)
    {
        cout << "No se ingresaron valores valido. \n";
        return 0;
    }

//Buscar el minimo y sus posiciones 
    int minimo = vec[0];
    for (int i = 0; i < n; i++)
    {
        if (vec[i] < minimo)
        {
            minimo = vec[i];
        }
        
    }

    cout << "\nValor minimo: " << minimo << endl;
    cout << "Posicion del minimo: ";
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == minimo)
        {
            cout << i << " ";
        }
        
    }
    cout << endl;

//Producto de impares en posicion par
    int producto = 1;
    bool existeImpar = false;

    for (int i = 0; i < n; i += 2) //solo posiciones pares 
    {
        if (vec[i] % 2 != 0) //si es impar
        {
            producto *= vec[i];
            existeImpar = true;
        }
        
    }

    if (existeImpar)
    {
        cout << "Producto de impares en posicion par: " << producto << endl;
    } else{
        cout << "No hay impares en posiciones pares.\n";
    }

    return 0;

}