#include <Subsystems/OI.h>
#include <WPILib.h>

OI::OI() {
	controller.reset(new Controllers(IDs::OI::controller));
}
OI::InitDefaultCommand() {

}
