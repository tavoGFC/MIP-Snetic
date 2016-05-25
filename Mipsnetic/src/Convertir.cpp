/*
 * Convertir.cpp
 *
 *  Created on: 25 de may. de 2016
 *      Author: gustavo
 */

#include "Convertir.h"

namespace std {

Convertir::Convertir() {
	// TODO Auto-generated constructor stub

}


/**
 * Funcion que convierte el numero binario a decimal
 * Recibe el numero a convertir
 * Verifica que si cada digito del binario es '0' o '1'
 * Si es '1' lo multiplica por 2 elevado a la posicion del digito
 * Se suman los resultados
 * Retorna el numero en decimal
 */
int Convertir::convertirBinario(string binario){
		int largoBinario = binario.length();
		int decimal = 0;
		int digito;
		int exponente = largoBinario - 1;

		for(int i = 0; i <= largoBinario - 1; i++){
			//si el digito que sigue del binario es 0, se suma 0 al resultado
			if(binario.substr(i, 1) == "0"){
				digito = 0;
			}
			//si el digito es 1, se suma el exponente
			if(binario.substr(i, 1) == "1"){
				digito = powf(2, exponente);
			}
			decimal += digito;
			exponente -= 1;
		}

	cout <<"\nbinario: "<<binario<<  " el numero es: "<< decimal<< endl;

		//Resultado de la conversion de binario a decimal
		return decimal;
}

Convertir::~Convertir() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
