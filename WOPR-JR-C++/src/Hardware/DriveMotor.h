/*
 * DriveMotor.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_DRIVEMOTOR_H_
#define SRC_DRIVEMOTOR_H_

#include <Spark.h>

class DriveMotor: public Spark {
public:
	DriveMotor (int channel);
};

#endif /* SRC_DRIVEMOTOR_H_ */
