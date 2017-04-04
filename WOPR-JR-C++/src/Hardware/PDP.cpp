/*
 * PDP.cpp
 *
 *  Created on: Apr 1, 2017
 *      Author: Ethan Duckworth
 */

#include <Hardware/PDP.h>
#include "Values/IDs.h"

PDP::PDP() {
	pdp.reset(new PowerDistributionPanel(IDs::CANS::module));
}
PDP::getCurrent(int chanel) {
	double current = pdp->GetCurrent(chanel);
	return current;
}
PDP::totalVolts() {
	double inputvolts = pdp->GetTotalCurrent();
	return inputvolts;
}
