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

using namespace std;

class InstructionDecoder {
private:
	string decode_R(string binaryCode);
	string decode_I(string binaryCode);
	string decode_J(string binaryCode);

public:
	InstructionDecoder();
	string decode(string binaryCode);
	virtual ~InstructionDecoder();
};

#endif /* INSTRUCTIONDECODER_H_ */
