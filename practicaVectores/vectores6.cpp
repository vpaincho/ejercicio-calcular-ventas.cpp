#include <iostream> 
using namespace ::std;

int main(){
    const int CANT_DEPORTES = 20;
    int contDeportes[CANT_DEPORTES + 1] = {0};

    int nroSocio, codDeporte;

    cout << "Ingrese numero de socio y codigo de deporte (1 a 20). Finaliza con nro de socio = 0:\n";

    while (true)
    {
        cout << "Numero de socio: ";
        cin >> nroSocio;

        if (nroSocio == 0) break;
        
        cout << "Codigo de deporte: ";
        cin >> codDeporte;
        
        if (codDeporte < 1 || codDeporte > CANT_DEPORTES)
        {
            cout << "Codigo invalido. Debe estar entre 1 y 20.\n";
            continue;
        }

        contDeportes[codDeporte]++;
        
    }
    
    //Mostrar inscriptos por deporte
    cout << "\nCantidad de inscriptos por deporte:\n";
    for (int i = 1; i <= CANT_DEPORTES; i++) {
    if (contDeportes[i] > 0) {
        cout << "Deporte " << i << ": " << contDeportes[i] << " inscriptos" << endl;
    }
    }


    //Buscar deporte con mas inscriptos
    int maxInscripciones = contDeportes[1];
    int deporteMax = 1;

    for (int i = 2; i <= CANT_DEPORTES; i++)
    {
        if (contDeportes[i] > maxInscripciones)
        {
            maxInscripciones = contDeportes[i];
            deporteMax = i;
        }
        
    }

    cout << "\nEl deporte con mas inscriptos fue el codigo " << deporteMax;
    cout << " con " << maxInscripciones << " inscriptos." << endl;

    return 0;
    
    
}