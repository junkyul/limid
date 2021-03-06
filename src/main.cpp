/*
 ============================================================================
 Name        : main.cpp
 Author      : Radu Marinescu
 Version     :
 Copyright   : Copyright (c) IBM Corp. 2015
 Description :
 ============================================================================
 */

#include "be.h"
#include "mbe.h"

int main(void) {

	std::cout << VERSIONINFO << std::endl << COPYRIGHT << std::endl;

	merlin::limid gm;
	gm.read("/home/radu/git/limid/examples/car.uai");
	merlin::be s(gm);
	s.run();

	merlin::mbe m(gm);
	m.run();
	m.run2();

	return 0;
}


