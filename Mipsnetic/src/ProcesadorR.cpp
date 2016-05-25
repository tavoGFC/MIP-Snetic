/*
 * ProcesadorR.cpp
 *
 *  Created on: May 25, 2016
 *      Author: kevin
 */

#include "ProcesadorR.h"

Convertir c;

ProcesadorRegistros::ProcesadorRegistros() {
	// TODO Auto-generated constructor stub

}

ProcesadorRegistros::~ProcesadorRegistros() {
	// TODO Auto-generated destructor stub
}

char* ProcesadorRegistros::comparar(char* s){
	if(c.convertirBinario(s)==2){
		return "$v0";
	}
	else if(c.convertirBinario(s)==3){
			return "$v1";
	}
	else if(c.convertirBinario(s)==4){
			return "$a0";
	}
	else if(c.convertirBinario(s)==5){
			return "$a1";
	}
	else if(c.convertirBinario(s)==6){
			return "$a2";
	}
	else if(c.convertirBinario(s)==7){
			return "$a3";
	}
	else if(c.convertirBinario(s)==8){
			return "$t0";
	}
	else if(c.convertirBinario(s)==9){
			return "$t1";
	}
	else if(c.convertirBinario(s)==10){
			return "$t2";
	}
	else if(c.convertirBinario(s)==11){
				return "$t3";
		}
	else if(c.convertirBinario(s)==12){
				return "$t4";
		}
	else if(c.convertirBinario(s)==13){
				return "$t5";
		}
	else if(c.convertirBinario(s)==14){
				return "$t6";
		}
	else if(c.convertirBinario(s)==15){
				return "$t7";
		}
	else if(c.convertirBinario(s)==16){
				return "$s0";
		}
	else if(c.convertirBinario(s)==17){
				return "$s1";
		}
	else if(c.convertirBinario(s)==18){
				return "$s2";
		}
	else if(c.convertirBinario(s)==19){
				return "$s3";
		}
	else if(c.convertirBinario(s)==20){
				return "$s4";
		}
	else if(c.convertirBinario(s)==21){
				return "$s5";
		}
	else if(c.convertirBinario(s)==22){
				return "s6";
		}
	else if(c.convertirBinario(s)==23){
				return "$s7";
		}
	else if(c.convertirBinario(s)==24){
				return "$t8";
		}
	else if(c.convertirBinario(s)==25){
				return "$t9";
		}
	else if(c.convertirBinario(s)==26){
				return "$k0";
		}
	else if(c.convertirBinario(s)==27){
				return "$k1";
		}
	else if(c.convertirBinario(s)==28){
				return "$gp";
		}
	else if(c.convertirBinario(s)==29){
				return "$sp";
		}
	else if(c.convertirBinario(s)==30){
				return "$fp";
		}
	else{
				return "$ra";
		}


}

