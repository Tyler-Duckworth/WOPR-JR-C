/*
 * Lidars.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Ethan Duckworth
 */

#include <Hardware/Lidars.h>

#include "networktables/NetworkTable.h"

#include <cmath>

Lidars::Lidars() {
	nt = NetworkTable::GetTable("lidar/distance");
}

Lidars::getDistance() {
	double distance = nt::GetNumber("Distance", M_PI);
	return distance;
}

Lidars::getInches() {
	double distance = nt::GetNumber("Distance", M_PI);
	double inches = distance * 0.393701;
	return inches;
}
