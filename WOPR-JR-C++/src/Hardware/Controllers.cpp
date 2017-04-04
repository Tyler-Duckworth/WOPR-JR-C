/*
 * Controllers.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: Ethan Duckworth
 */

#include <Hardware/Controllers.h>

Controllers::Controllers(int port) {
	Controller::port;
}

double Controllers::signum(double values) {
	if(values < 0) {
		return -1;
	} else if (values > 0) {
		return 1;
	} else {
		return 0;
	}
}

double Controllers::pow_scale(double val, double pow) {
	double _abs_v = abs(val);
	double _sgn_v = signum(val);
	return _sgn_v * pow(_abs_v, pow);
}

double Controllers::_pow_scale(double value) {
	return pow_scale(value, 2.0);
}

bool Controllers::getButton(int id) {
	return frc::Joystick::GetButton(id);
}

double Controllers::getAxis(int axisid) {
	return _pow_scale(Joystick::GetRawAxis(axisid));
}
Controllers::~Controllers() {
	// TODO Auto-generated destructor stub
}

