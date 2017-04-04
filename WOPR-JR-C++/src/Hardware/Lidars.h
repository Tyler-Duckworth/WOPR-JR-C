/*
 * Lidars.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_LIDARS_H_
#define SRC_HARDWARE_LIDARS_H_

#include "networktables/NetworkTable.h"

class Lidars {
private:

	std::shared_ptr<NetworkTable> nt;

public:

	Lidars();

	double getDistance();

	double getInches();
};

#endif /* SRC_HARDWARE_LIDARS_H_ */
