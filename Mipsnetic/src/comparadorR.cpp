/*
 * comparadorR.cpp
 *
 *  Created on: 25 de may. de 2016
 *      Author: fernanda
 */

#include <stdio.h>
#include <stdlib.h>

int main(char operacion[])
{

   if (operacion=="001000"){
	   return "+";
   }
   if (operacion=="011010"){
	   return "/";
   }
   if (operacion=="011011"){
	   return "/";
   }
   if (operacion=="100000"){
	   return "/+";
   }
   if (operacion=="100001"){
	   return "+";
   }
   if (operacion=="100010"){
	   return "-";
   }
   if (operacion=="100110"){
	   return "XOR";
   }
   if (operacion=="101010"){
	   return "/slt";
   }
   if (operacion=="011000"){
	   return "*";
   }
   if (operacion=="010010"){
	   return "/mflo";
   }
   if (operacion=="000010"){
	   return "/j";
   }
   if (operacion=="100110"){
	   return "/syscall";
   }
   else{
	   return 0;
   }
}


