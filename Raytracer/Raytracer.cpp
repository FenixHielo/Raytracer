// Raytracer.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "vec3.h"

using namespace std;

int main() {

	int filas = 200;
	int columnas = 100;

	ofstream img("Trazarayos.ppm");

	img << "P3\n" << filas << " " << columnas << "\n255\n";
	//std::cout << "P3\n" << filas << " " << columnas << "\n255\n";

	for (int j = columnas-1; j >= 0; j--) {
		for (int i = 0; i < filas; i++) {
			
			float red = float(i) / float(filas);
			float green = float(j) / float(columnas + filas);
			float blue = 0.8;

			int intRed = int(255.99*red);
			int intGreen = int(255.99*green);
			int intBlue = int(255.99*blue);

			img << intRed << " " << intGreen << " " << intBlue << "\n";
			std::cout << intRed << " " << intGreen << " " << intBlue << "\n";
		}
	}
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
