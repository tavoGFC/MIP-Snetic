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

string Lector:: parsear(string path){
	//ifstream ifs("/home/ricardo/Documents/Assembla/binarioMetodoData");
	ifstream ifs(path);
	string content( (istreambuf_iterator<char>(ifs) ),
	                         (istreambuf_iterator<char>()    ) );

	cout<<content<<endl;

	return content;
}

Lector::~Lector() {
	// TODO Auto-generated destructor stub
}

