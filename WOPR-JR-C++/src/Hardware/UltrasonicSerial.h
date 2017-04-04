/*
 * UltrasonicSerial.h
 *
 *  Created on: Apr 2, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_ULTRASONICSERIAL_H_
#define SRC_HARDWARE_ULTRASONICSERIAL_H_

#include <WPILib.h>

using namespace std;
class UltrasonicSerial {
public:
	shared_ptr<SerialPort> serial;
	string distancestring;
	double lastGoodValue;
	string portReadout();
	double getDistance();
	UltrasonicSerial();
	virtual ~UltrasonicSerial();
};

#endif /* SRC_HARDWARE_ULTRASONICSERIAL_H_ */
