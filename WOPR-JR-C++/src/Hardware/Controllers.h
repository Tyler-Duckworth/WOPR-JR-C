/*
 * Controllers.h
 *
 *  Created on: Mar 15, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_CONTROLLERS_H_
#define SRC_HARDWARE_CONTROLLERS_H_

class Controllers: frc::Joystick {

public:
	Controllers(int port);

	double signum(double values);

	double pow_scale(double val, double pow);

	double _pow_scale(double value);

	bool getButton(int button_id);

	double getAxis(int axisid);
};

#endif /* SRC_HARDWARE_CONTROLLERS_H_ */
