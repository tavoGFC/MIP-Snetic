/*
 * Lector.cpp
 *
 *  Created on: May 21, 2016
 *      Author: ricardo
 */

#include "Lector.h"

Lector::Lector() {
	// TODO Auto-generated constructor stub

}

void Lector:: parsear(string path){
	ifstream ifs("/home/ricardo/Documents/Assembla/congruencialBinarioBinarioText");
	//ifstream ifs(path);
	string content( (istreambuf_iterator<char>(ifs) ),
	                         (istreambuf_iterator<char>()    ) );

	this->textoBin=content;
	this->cantLineas=((content.length()-1)/32);

	//cout<< textoBin <<endl;
	return;
}

LinkedList Lector:: dividirArchivo(){

	string texto=this->textoBin;
	int cantDigitos=this->textoBin.length();

	LinkedList lista;
	int i=0;
	while(i < this->cantLineas){
		lista.addNode(texto.substr(0,32));
		texto=texto.substr(33,cantDigitos);
		//cout<<lista[i]<<endl;
		i=i+1;
	}
	return lista;
}

Lector::~Lector() {
	// TODO Auto-generated destructor stub
}
