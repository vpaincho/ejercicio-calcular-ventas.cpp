#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de elementos (menor a 30): ";
    cin >> N;

    if (N <= 0 || N >= 30) {
        cout << "⚠️ N debe ser mayor a 0 y menor a 30." << endl;
        return 1;
    }

    int vec[30]; // Reservamos el máximo por si el compilador no permite tamaño variable

    // Cargar los N elementos
    for (int i = 0; i < N; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> vec[i];
    }

    cout << "\nResultado:\n";

    if (vec[N - 1] < 10) {
        cout << "Último elemento < 10 → Mostrar negativos:\n";
        for (int i = 0; i < N; i++) {
            if (vec[i] < 0) {
                cout << vec[i] << " ";
            }
        }
    } else {
        cout << "Último elemento >= 10 → Mostrar no negativos:\n";
        for (int i = 0; i < N; i++) {
            if (vec[i] >= 0) {
                cout << vec[i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
