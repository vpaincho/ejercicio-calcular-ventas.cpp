#include <iostream>
#include <cstring>
#include <cstdio>   // sprintf / fprintf / FILE*
using namespace std;

struct Venta {
    char fecha[11];         // "YYYY-MM-DD" + '\0'
    char codigo[8];         // Ej: "ART001" + '\0'
    char descripcion[30];   // Nombre del producto
    char local[6];          // Ej: "LOC01" + '\0'
    float precio;
    int cantidad;
};

void localesCta(char [][6],char [],int&);

int main() {
    Venta ventas;
    const int N = 5;
    const char locales[N][6] = {"LOC01","LOC02","LOC03","LOC04","LOC05"};
    double importes[N] = {0};   // acumulador de cada local

    // === 1) Pedir año y mes ===
    int anio, mes;
    cout << "Ingrese anio (YYYY): ";
    cin >> anio;
    cout << "Ingrese mes (1..12): ";
    cin >> mes;

    if (anio < 0 || mes < 1 || mes > 12) {
        cout << "Fecha invalida.\n";
        return 1;
    }

    // clave "YYYY-MM"
    char clave[8];
    sprintf(clave, "%04d-%02d", anio, mes);

    // rutas de archivo
    const char* baseDir = "C:\\users\\prueba\\oneDrive\\desktop\\ayED 2025\\";
    char inPath[260];
    snprintf(inPath, sizeof(inPath), "%sventas (3).bin", baseDir);

    char outPath[260];
    snprintf(outPath, sizeof(outPath), "%sventas_%s.txt", baseDir, clave); // TXT

    FILE* archivo = fopen(inPath, "rb");
    if (!archivo) {
        cout << "No se pudo abrir el archivo de entrada.\n";
        return 1;
    }

    FILE* salida = fopen(outPath, "w");   // salida en modo txt
    if (!salida) {
        cout << "No se pudo crear el archivo de salida.\n";
        fclose(archivo);
        return 1;
    }

    int coincidencias = 0;

    // Cabecera del archivo
    fprintf(salida, "Ventas del mes %s\n", clave);
    fprintf(salida, "Fecha | Local | Codigo | Descripcion | Precio | Cantidad | Importe\n");
    fprintf(salida, "----------------------------------------------------------------------\n");

    // === 2) Leer ventas y filtrar por mes-año ===
    while (fread(&ventas, sizeof(Venta), 1, archivo) == 1) {
        ventas.local[5] = '\0';

        // acumular importes generales (igual que tu código original)
        for (int i = 0; i < N; i++) {
            if (strcmp(ventas.local, locales[i]) == 0) {
                importes[i] += ventas.precio * ventas.cantidad;
                break;
            }
        }

        // si coincide YYYY-MM, escribir en archivo de texto
        if (strncmp(ventas.fecha, clave, 7) == 0) {
            double importe = ventas.precio * ventas.cantidad;
            fprintf(salida, "%s | %s | %s | %s | %.2f | %d | %.2f\n",
                    ventas.fecha,
                    ventas.local,
                    ventas.codigo,
                    ventas.descripcion,
                    ventas.precio,
                    ventas.cantidad,
                    importe);

            coincidencias++;
        }
    }

    fclose(archivo);
    fclose(salida);

    cout << "\nSe guardaron " << coincidencias
         << " ventas del mes " << clave
         << " en: " << outPath << "\n";

    // 3) Resumen importes generales 
    cout << "\n--- Importes por local (sobre todas las ventas leídas) ---\n";
    for (int j = 0; j < N; j++)
        cout << locales[j] << ": $" << importes[j] << endl;

    return 0;
}