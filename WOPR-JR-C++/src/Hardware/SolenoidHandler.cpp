/*
 * SolenoidHandler.cpp
 *
 *  Created on: Apr 1, 2017
 *      Author: Ethan Duckworth
 */

#include "SolenoidHandler.h"

SolenoidHandler::SolenoidHandler(int _A, int _B, bool _areTogether, bool _isInverted) {
	a.reset(new Solenoid(_A));
	b.reset(new Solenoid(_B));
	areTogether = _areTogether;
	isInverted = _isInverted;
	def = !isInverted;
	last = false;
	set(!def);
}

SolenoidHandler::SolenoidHandler(int _A, int _B, bool _areTogether) {
	this->_A = _A;
	this->_B = _B;
	this->_areTogether = _areTogether;
	this->_isInverted = false;
}

SolenoidHandler::toggle() {
	set(!last);
}

SolenoidHandler::set(bool seton) {
	if (seton) {
		enable();
	}
	else {
		disable();
	}
}

SolenoidHandler::get() {
	return last;
}

SolenoidHandler::enable() {
	last = true;
	a->Set(!def);
	b->Set(!def ^ !areTogether);
}

SolenoidHandler::disable() {
	last = false;
	a->Set(!def);
	b->Set(!def ^ !areTogether);
}
