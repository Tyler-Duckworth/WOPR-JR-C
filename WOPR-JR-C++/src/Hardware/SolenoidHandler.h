/*
 * SolenoidHandler.h
 *
 *  Created on: Apr 1, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_SOLENOIDHANDLER_H_
#define SRC_HARDWARE_SOLENOIDHANDLER_H_

#include "WPILib.h"

class SolenoidHandler {
public:
	static std::shared_ptr<frc::Solenoid> a, b;

	bool areTogether, isInverted;
	bool def, last;

	SolenoidHandler(int _a, int _b, bool _areTogether, bool _isInverted);

	SolenoidHandler(int _a, int _b, bool _areTogether);

	void toggle();

	void set(bool on);

	bool get();

	void enable();

	void disable();
};

#endif /* SRC_HARDWARE_SOLENOIDHANDLER_H_ */
