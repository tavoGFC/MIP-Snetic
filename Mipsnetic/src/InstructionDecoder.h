/*
 * InstructionDecoder.h
 *
 *  Created on: May 25, 2016
 *      Author: ricardo
 */

#ifndef INSTRUCTIONDECODER_H_
#define INSTRUCTIONDECODER_H_

#include <string>
#include<iostream>

#include "Convertir.h"

using namespace std;

class InstructionDecoder {
private:
	string decode_R(string binaryCode);
	string decode_I(string binaryCode);
	string decode_J(string binaryCode);

	Convertir conversor;

public:
	InstructionDecoder();
	string decode(string binaryCode);
	string docodeRegister(string binaryResgisters);
	virtual ~InstructionDecoder();
};

#endif /* INSTRUCTIONDECODER_H_ */
