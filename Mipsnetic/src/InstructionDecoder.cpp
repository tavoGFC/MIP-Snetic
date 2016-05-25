/*
 * InstructionDecoder.cpp
 *
 *  Created on: May 25, 2016
 *      Author: ricardo
 */

#include "InstructionDecoder.h"

InstructionDecoder::InstructionDecoder() {
	// TODO Auto-generated constructor stub

}

string InstructionDecoder :: decode(string binaryCode){
	string firstSix;
	firstSix=binaryCode.substr(0,6);
	int decimalFirstSix;
	decimalFirstSix=this->conversor.convertirBinario(firstSix);
	if (decimalFirstSix==0){
		cout<<"TIPO R"<<endl;
		return "Tipo R";
		//return this->decode_R(binaryCode);
	}
	if (decimalFirstSix==2 or decimalFirstSix==3){
		cout<<"TIPO J"<<endl;
		return "Tipo J";
		//return this->decode_J(binaryCode);
		}
	else{
		cout<<"TIPO I"<<endl;
		return "Tipo I";
		//return this->decode_I(binaryCode);
	}
}

string InstructionDecoder :: decode_R(string binaryCode){

}

string InstructionDecoder :: decode_I(string binaryCode){

}

string InstructionDecoder :: decode_J(string binaryCode){

}

InstructionDecoder::~InstructionDecoder() {
	// TODO Auto-generated destructor stub
}

