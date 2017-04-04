/*
 * MotorEncoder.cpp
 *
 *  Created on: Mar 19, 2017
 *      Author: Ethan Duckworth
 */

#include <MotorEncoder.h>

#include <Encoder.h>

MotorEncoder::MotorEncoder(int ids[]) {
	channels = ids;
	encodingtype = Encoder::EncodingType::k4X;
	size = sizeof(channels) / sizeof(*channels);
	SetDistancePerPulse(DISTANCE_PER_TICK);
	if(sizeof(channels) != 2) {
		std::cout << "ERROR: The encoder requires TWO channels to function properly." << std::end1;
	}
};
