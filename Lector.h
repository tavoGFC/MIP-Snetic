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
using namespace std;

class Lector {
public:
	Lector();
	string parsear(string path);
	virtual ~Lector();
};

#endif /* LECTOR_H_ */
