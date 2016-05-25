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
 * Funcion auxiliar que determina cuantos digitos
 * tiene el numero binario a convertir
 * Recibe como argumento el numero binario
 */
int Convertir::convertirAuxiliar(char *binary){
	int contador = 0;
		int i = 0;
		while(1){
			//Verifica que cuando ya no alla
			//numero a comparar termine el ciclo
			if (binary[i] == NULL){
				break;
			}
			i++;
			contador += 1;
		}
		//Retorna la cantidad de digitos que tenga el numero + 1
		return contador;
}

/**
 * Funcion que convierte el numero binario a decimal
 * Recibe el numero a convertir
 * Verifica que si cada digito del binario es '0' o '1'
 * Si es '1' lo multiplica por 2 elevado a la posicion del digito
 * Se suman los resultados
 * Retorna el numero en decimal
 */
int Convertir::convertirBinario(char *binary){
	char *binario = binary;
		int largoBinario = convertirAuxiliar(binario);
		int decimal = 0;
		int digito;
		int exponente = largoBinario - 1;

		for(int i = 0; i <= largoBinario - 1; i++){
			//si el digito que sigue del binario es 0, se suma 0 al resultado
			if(binario[i] == '0'){
				digito = 0;
			}
			//si el digito es 1, se suma el exponente
			if(binario[i] == '1'){
				digito = powf(2, exponente);
			}
			decimal += digito;
			exponente -= 1;
		}

	//cout <<"\nbinario: "<<binario<<  " el numero es: "<< decimal<< endl;

		//Resultado de la conversion de binario a decimal
		return decimal;
}

Convertir::~Convertir() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
