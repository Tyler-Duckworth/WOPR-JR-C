/*
 * MotorEncoder.h
 *
 *  Created on: Mar 19, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_HARDWARE_MOTORENCODER_H_
#define SRC_HARDWARE_MOTORENCODER_H_

#include <Encoder.h>

class MotorEncoder: public Encoder {
public:
	/*Max Speeds*/
	double MAX_HIGH_SPEED = 3.5;
	double MAX_LOW_SPEED = 1.4;

	double MAX_DISTANCE = 10000.0;
	/*in meters per second*/
	double MAX_TOLERANCE_SPEED = .1;
	/*In meters*/
	double MAX_TOLERANCE_DISTANCE = 0.02;
	/*Empirically found*/
	double DISTANCE_PER_TICK = 1.0 / 2950;

	MotorEncoder(int array[]);

};

#endif /* SRC_HARDWARE_MOTORENCODER_H_ */
