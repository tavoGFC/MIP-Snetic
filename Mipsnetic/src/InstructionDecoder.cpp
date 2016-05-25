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

string InstructionDecoder::docodeRegister(string binaryRegisters){
	int registerD = conversor.convertirBinario(binaryRegisters);

	if( registerD == 0){
		cout << "$zero" << endl;
			return "$zero";
		}
	if( registerD == 1){
		cout << "$at" << endl;
			return "$at";
		}
	if( registerD == 2){
		cout << "$v0" << endl;
			return "$v0";
		}
	if( registerD == 3){
		cout << "$v1" << endl;
			return "$v1";
		}
	if( registerD == 4){
		cout << "$a0" << endl;
			return "$a0";
		}
	if( registerD == 5){
		cout << "$a1" << endl;
			return "$a1";
		}
	if( registerD == 6){
		cout << "$a2" << endl;
			return "$a2";
		}
	if( registerD == 7){
		cout << "$a3" << endl;
			return "$a3";
		}
	if( registerD == 8){
		cout << "$t0" << endl;
			return "$t0";
		}
	if( registerD == 9){
		cout << "$t1" << endl;
			return "$t1";
		}
	if( registerD == 10){
		cout << "$t2" << endl;
			return "$t2";
		}
	if( registerD == 11){
		cout << "$t3" << endl;
			return "$t3";
		}
	if( registerD == 12){
		cout << "$t4" << endl;
			return "$t4";
		}
	if( registerD == 13){
		cout << "$t5" << endl;
			return "$t5";
		}
	if( registerD == 14){
		cout << "$t6" << endl;
			return "$t6";
		}
	if( registerD == 15){
		cout << "$t7" << endl;
			return "$t7";
		}
	if( registerD == 16){
		cout << "$s0" << endl;
		return "$s0";
		}
	if( registerD == 17){
		cout << "$s1" << endl;
		return "$s1";
		}
	if( registerD == 18){
		cout << "$s2" << endl;
		return "$s2";
		}
	if( registerD == 19){
		cout << "$s3" << endl;
		return "$s3";
		}
	if( registerD == 20){
		cout << "$s4" << endl;
		return "$s4";
		}
	if( registerD == 21){
		cout << "$s5" << endl;
		return "$s5";
		}
	if( registerD == 22){
		cout << "$s6" << endl;
		return "$s6";
		}
	if( registerD == 23){
		cout << "$s7" << endl;
		return "$s7";
		}
	if( registerD == 24){
		cout << "$t8" << endl;
		return "$t8";
		}
	if( registerD == 25){
		cout << "$t9" << endl;
		return "$t9";
		}

}

InstructionDecoder::~InstructionDecoder() {
	// TODO Auto-generated destructor stub
}

