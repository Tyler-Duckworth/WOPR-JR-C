/*
 * DistanceSensor.h

 *
 *  Created on: Mar 16, 2017
 *      Author: Ethan Duckworth
 */

#include <CircularBuffer.h>
#include <AnalogInput.h>

#ifndef SRC_HARDWARE_DISTANCESENSOR_H_
#define SRC_HARDWARE_DISTANCESENSOR_H_

class DistanceSensor {
private:
	CircularBuffer cb = new CircularBuffer(10);
	double MV_PER_M = 4.88 / 5;
public:
	DistanceSensor(int id);
	double getDistance();
	double getVoltages();
	double getAvgVolts();
	double getAvgDistance();
};

#endif /* SRC_HARDWARE_DISTANCESENSOR_H_ */
