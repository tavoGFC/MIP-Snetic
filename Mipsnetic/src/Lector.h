/*
 * Lector.h
 *
 *  Created on: May 21, 2016
 *      Author: ricardo
 */

#ifndef LECTOR_H_
#define LECTOR_H_
#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"
using namespace std;

class Lector {
private:
	string textoBin;
	int cantLineas;

public:

	Lector();

	void parsear(string path); //parsea el archivo de texto, en este caso se le pasaran las rutas donde se encuentran los archivos que contienen los binarios a parsear
	//dividirLineas();
	LinkedList dividirArchivo(); //se utiliza despues de haber parseado, divide las lineas de los binarios y agrega las lineas a un array de lineas

	virtual ~Lector();
};

#endif /* LECTOR_H_ */
