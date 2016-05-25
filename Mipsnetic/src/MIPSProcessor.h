/*
 * MIPSProcessor.h
 *
 *  Created on: May 24, 2016
 *      Author: kevin
 */


#ifndef MIPSPROCESSOR_H_
#define MIPSPROCESSOR_H_

#include <iostream>
#include <stdlib.h>
#include "Lector.h"
#include "InstructionDecoder.h"

using namespace std;

class MIPSProcessor {
    
private:
	Lector lector;
	InstructionDecoder decodificador;
public:
    MIPSProcessor();
    virtual ~MIPSProcessor();
    void* $v0ptr;
    void* $v1ptr;
    void* $a0ptr;
    void* $a1ptr;
    void* $a2ptr;
    void* $a3ptr;
    void* $t0ptr;
    void* $t1ptr;
    void* $t2ptr;
    void* $t3ptr;
    void* $t4ptr;
    void* $t5ptr;
    void* $t6ptr;
    void* $t7ptr;
    void* $t8ptr;
    void* $t9ptr;
    void* $s0ptr;
    void* $s1ptr;
    void* $s2ptr;
    void* $s3ptr;
    void* $s4ptr;
    void* $s5ptr;
    void* $s6ptr;
    void* $s7ptr;
    void* get$v0ptr();
    void* get$v1ptr();
    void* get$a0ptr();
    void* get$a1ptr();
    void* get$a2ptr();
    void* get$a3ptr();
    void* get$t0ptr();
    void* get$t1ptr();
    void* get$t2ptr();
    void* get$t3ptr();
    void* get$t4ptr();
    void* get$t5ptr();
    void* get$t6ptr();
    void* get$t7ptr();
    void* get$t8ptr();
    void* get$t9ptr();
    void* get$s0ptr();
    void* get$s1ptr();
    void* get$s2ptr();
    void* get$s3ptr();
    void* get$s4ptr();
    void* get$s5ptr();
    void* get$s6ptr();
    void* get$s7ptr();


};

#endif /* MIPSPROCESSOR_H_ */
