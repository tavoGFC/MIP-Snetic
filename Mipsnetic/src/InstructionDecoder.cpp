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
	if (binaryCode=="100000"){
			return "+";
		}
		if (binaryCode=="011010"){
			return "/";
		}
		if (binaryCode=="100010"){
			return "-";
		}
		if (binaryCode=="100110"){
			return "XOR";
		}
		if (binaryCode=="101010"){
				return "slt";
		}
		if (binaryCode=="011000"){
			return "*";
		}
		if (binaryCode=="010010"){
			return "mflo";
		}
		if (binaryCode=="100110"){
			return "syscall";
		}
		else{
			return 0;
		}
}

string InstructionDecoder :: decode_I(string binaryCode){
	if (binaryCode=="001000"){
			return "+";
		}
		if (binaryCode=="000100"){
			return "beq";
		}
		if (binaryCode=="100110"){
			return "syscall";
		}
		else{
			return 0;
		}
}

string InstructionDecoder :: decode_J(string binaryCode){
	if (binaryCode=="000010"){
			return "j";
		}
		if (binaryCode=="000011"){
			return "jal";
		}
		else{
			return 0;
		}
}

InstructionDecoder::~InstructionDecoder() {
	// TODO Auto-generated destructor stub
}

