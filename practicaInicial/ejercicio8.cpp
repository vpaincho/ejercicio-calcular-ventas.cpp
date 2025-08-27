#include <iostream>
using namespace::std;

int main(){

    int numero;

    cout << "Ingrese un numero entero de 5 digitos: ";
    cin >> numero;

    if (numero < 10000 || numero > 99999)
    {
        cout << "Error: el numero debe tener exactamente 5 digitos." << endl;
        
        return 1;
    }

    int digito1 = numero / 10000;
    int digito2 = (numero / 1000) % 10;
    int digito3 = (numero / 100) % 10;
    int digito4 = (numero / 10) % 10;
    int digito5 = numero % 10;

    cout << digito1 << endl;
    cout << digito2 << endl;
    cout << digito3 << endl;
    cout << digito4 << endl;
    cout << digito5 << endl;
    
    
    
    return 0;

}
