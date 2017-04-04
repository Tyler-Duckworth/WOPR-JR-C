/*
 * Sensors.h
 *
 *  Created on: Apr 3, 2017
 *      Author: Ethan Duckworth
 */

#include <AHRS.h>
#include "WPILib.h"
#include "Hardware/DistanceSensor.h"
#include "Hardware/Lidars.h"
#include "Hardware/PDP.h"

#ifndef SRC_SUBSYSTEMS_SENSORS_H_
#define SRC_SUBSYSTEMS_SENSORS_H_

class Sensors: public Subsystem {
public:
	std::shared_ptr<AHRS> ahrs;
	std::shared_ptr<DistanceSensor> distsense;
	std::shared_ptr<Lidars> lidar;
	std::shared_ptr<PDP> pdp;

	Sensors();
	double getLidarDifference();

protected:
	void InitDefaultCommand();
};

#endif /* SRC_SUBSYSTEMS_SENSORS_H_ */
