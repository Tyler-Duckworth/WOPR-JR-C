/*
 * PDP.h
 *
 *  Created on: Apr 1, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_PDP_H_
#define SRC_HARDWARE_PDP_H_

#include "WPILib.h"
#include "Values/IDs.h"

class PDP {
public:
	static std::shared_ptr<frc::PowerDistributionPanel> pdp;
	PDP();
	double getCurrent(int channel);
	double totalVolts();
	double maxVoltage();
};

#endif /* SRC_HARDWARE_PDP_H_ */
