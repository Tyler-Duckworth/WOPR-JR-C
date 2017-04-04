/*
 * IDs.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Ethan Duckworth
 */

#ifndef SRC_VALUES_IDS_H_
#define SRC_VALUES_IDS_H_

namespace IDs {

	namespace OI {
	/* USBs and things/**/
		const int controller = 0;
	}

	namespace CANS {
	/*
	 CANs/PWMs
	 *//**/
		const int module = 0;
		const int L0Motor = 2;
		const int L1Motor = 3;

		const int R0Motor = 0;
		const int R1Motor = 1;

		const int climbMotor = 4;
		const int intakeMotor = 5;
		const int stirMotor = 6;

		const int shooterMotor = 7;
	}

	namespace DIO {
	/* DIO/**/
		const int L_encoder_dio [2]= {3, 2};
		const int R_encoder_dio [2]= {0, 1};
	}

	namespace sensors {
	/*
	 Serial and Analog
	 */
		const int ultrasonic_0 = 0;
	}

	namespace modes {
		int gearbox_highgear = 4;
		int gearbox_lowgear = 5;

		int gear_gateopen = 0;
		int gear_gateclose = 1;

		int gear_intakelower = 2;
		int gear_intaketighten = 3;
	}

	namespace EXMeasures {
		int x_axis = 0;
		int y_axis = 1;
		int rot_axis = 2;
	}
};



#endif /* SRC_VALUES_IDS_H_ */
