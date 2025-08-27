# 📊 Ejercicio: Calcular Ventas (C++)

[![C++](https://img.shields.io/badge/language-C++-blue.svg)](https://isocpp.org/)
[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)]()
[![GitHub](https://img.shields.io/badge/hosted%20on-GitHub-black.svg)](https://github.com/)

Este proyecto en **C++** permite leer ventas almacenadas en un archivo binario y generar un archivo de texto legible con los registros filtrados por **mes y año**.  

El objetivo es practicar:
- Manejo de **archivos binarios**.  
- Uso de **estructuras (`struct`)** para modelar datos.  
- Manejo de **cadenas de caracteres** y funciones (`strcmp`, `strncmp`).  
- Aplicación de **acumuladores** y filtros.  
- Control de versiones con **Git & GitHub**.  

---

## ✨ Funcionalidades
- 📂 Lectura de registros `Venta` desde un archivo binario.  
- 🔍 Filtro de ventas por **mes/año** (`YYYY-MM`).  
- 📝 Exportación a archivo `.txt` en formato tabular y legible.  
- 💰 Cálculo de importes acumulados por local.  
- 📊 Compatible con Notepad y Excel para análisis posterior.  

---

## 🚀 Compilación y ejecución

1. Compilar el programa:
   ```bash
   g++ ejercicioCalcularVentas.cpp -o ventas.exe

2. Ejecutar:
   ./ventas.exe

3. Ingresar el **año** y **mes** cuando el programa lo solicite (ejemplo: 2025 y 08).

4. El programa generará un archivo de salida:
   ventas_YYYY-MM.txt
   con las ventas filtradas y un resumen por local.

## 📂 Estructura del archivo binario
Cada registro contiene:
- `fecha` → formato `YYYY-MM-DD`  
- `codigo` → código del producto (ejemplo: `ART001`)  
- `descripcion` → descripción del producto  
- `local` → identificador del local (`LOC01` a `LOC05`)  
- `precio` → precio unitario  
- `cantidad` → unidades vendidas  

## 📌 Ejemplo de salida (`ventas_2025-08.txt`)
Ventas del mes 2025-08
Fecha | Local | Codigo | Descripcion | Precio | Cantidad | Importe
----------------------------------------------------------------------
2025-08-01 | LOC01 | ART001 | Producto A | 120.50 | 3 | 361.50
2025-08-02 | LOC03 | ART002 | Producto B | 80.00  | 1 | 80.00

--- Importes por local ---
LOC01: $361.50
LOC02: $0.00
LOC03: $80.00
LOC04: $0.00
LOC05: $0.00


---

## 🛠️ Tecnologías
- Lenguaje: **C++**
- Editor: **Visual Studio Code**
- Control de versiones: **Git & GitHub**

---

💡 *Este repositorio forma parte de mis prácticas en la UTN y documenta el progreso en programación con C++.*

