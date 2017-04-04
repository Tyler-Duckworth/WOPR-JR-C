#include "Hardware/Controllers.h"
#include "WPILib.h"
#include "Values/IDs.h"

#ifndef OI_H
#define OI_H

class OI: public Subsystem {
private:

	std::shared_ptr<Hardware::Controllers> controller;
public:

	OI();

protected:
	void InitDefaultCommand();
};

#endif  // OI_H
