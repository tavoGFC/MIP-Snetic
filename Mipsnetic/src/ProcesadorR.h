/*
 * ProcesadorR.h
 *
 *  Created on: May 25, 2016
 *      Author: kevin
 */

#ifndef PROCESADORR_H_
#define PROCESADORR_H_

#include <iostream>
#include <string>
#include "Convertir.h"

using namespace std;

class ProcesadorRegistros {
public:
	ProcesadorRegistros();
	virtual ~ProcesadorRegistros();
	char* comparar(char* s);
};

#endif /* PROCESADORR_H_ */
