/*
 * Convertir.h
 *
 *  Created on: 25 de may. de 2016
 *      Author: gustavo
 */

#ifndef CONVERTIR_H_
#define CONVERTIR_H_

#include <cmath>
#include <iostream>

namespace std {

class Convertir {
public:
	Convertir();
	int convertirBinario(char *Binary);
	virtual ~Convertir();

private:
	int convertirAuxiliar(char *Binary);
};

} /* namespace std */

#endif /* CONVERTIR_H_ */
