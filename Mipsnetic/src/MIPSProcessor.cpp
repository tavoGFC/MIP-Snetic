/*
 * MIPSProcessor.cpp
 *
 *  Created on: May 24, 2016
 *      Author: kevin
 */


#include "MIPSProcessor.h"

using namespace std;

MIPSProcessor::MIPSProcessor() {
    // TODO Auto-generated constructor stub
    $v0ptr=(void*) malloc(67108864);
    $v1ptr=$v0ptr+64;
    $a0ptr=$v1ptr+64;
    $a1ptr=$a0ptr+64;
    $a2ptr=$a1ptr+64;
    $a3ptr=$a2ptr+64;
    $t0ptr=$a3ptr+64;
    $t1ptr=$t0ptr+64;
    $t2ptr=$t1ptr+64;
    $t3ptr=$t2ptr+64;
    $t4ptr=$t3ptr+64;
    $t5ptr=$t4ptr+64;
    $t6ptr=$t5ptr+64;
    $t7ptr=$t6ptr+64;
    $t8ptr=$t7ptr+64;
    $t9ptr=$t8ptr+64;
    $s0ptr=$t9ptr+64;
    $s1ptr=$s0ptr+64;
    $s2ptr=$s1ptr+64;
    $s3ptr=$s2ptr+64;
    $s4ptr=$s3ptr+64;
    $s5ptr=$s4ptr+64;
    $s6ptr=$s5ptr+64;
    $s7ptr=$s6ptr+64;
    cout << $v0ptr << endl;
    cout << $s6ptr << endl;
}

MIPSProcessor::~MIPSProcessor() {
    // TODO Auto-generated destructor stub
}

void *MIPSProcessor::get$v0ptr() {
    return $v0ptr;
}

void *MIPSProcessor::get$v1ptr() {
    return $v1ptr;
}

void *MIPSProcessor::get$a0ptr() {
    return $a0ptr;
}

void *MIPSProcessor::get$a1ptr() {
    return $a1ptr;
}

void *MIPSProcessor::get$a2ptr() {
    return $a2ptr;
}

void *MIPSProcessor::get$a3ptr() {
    return $a3ptr;
}

void *MIPSProcessor::get$t0ptr() {
    return $t0ptr;
}

void *MIPSProcessor::get$t1ptr() {
    return $t1ptr;
}

void *MIPSProcessor::get$t2ptr() {
    return $t2ptr;
}

void *MIPSProcessor::get$t3ptr() {
    return $t3ptr;
}

void *MIPSProcessor::get$t4ptr() {
    return $t4ptr;
}

void *MIPSProcessor::get$t5ptr() {
    return $t5ptr;
}

void *MIPSProcessor::get$t6ptr() {
    return $t6ptr;
}

void *MIPSProcessor::get$t7ptr() {
    return $t7ptr;
}

void *MIPSProcessor::get$t8ptr() {
    return $t8ptr;
}

void *MIPSProcessor::get$t9ptr() {
    return $t9ptr;
}

void *MIPSProcessor::get$s0ptr() {
    return $s0ptr;
}

void *MIPSProcessor::get$s1ptr() {
    return $s1ptr;
}

void *MIPSProcessor::get$s2ptr() {
    return $s2ptr;
}

void *MIPSProcessor::get$s3ptr() {
    return $s3ptr;
}

void *MIPSProcessor::get$s4ptr() {
    return $s4ptr;
}

void *MIPSProcessor::get$s5ptr() {
    return $s5ptr;
}

void *MIPSProcessor::get$s6ptr() {
    return $s6ptr;
}

void *MIPSProcessor::get$s7ptr() {
    return $s7ptr;
}



