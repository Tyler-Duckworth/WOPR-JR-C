/*
 * DistanceSensor.cpp
 *
 *  Created on: Mar 16, 2017
 *      Author: Ethan Duckworth
 */

#include <Hardware/DistanceSensor.h>
#include <CircularBuffer.h>

DistanceSensor::DistanceSensor(int id) {
	DistanceSensor::cb.reset(new CircularBuffer(10));
	ids = id;
	frc::AnalogInput::SetAverageBits(4);
	frc::AnalogInput::SetOversampleBits(5);
	frc::AnalogInput::SetGlobalSampleRate(62500);
}
double DistanceSensor::getDistance() {
	double met = frc::AnalogInput::GetAverageVoltage() * DistanceSensor::MV_PER_M;
	frc::CircularBuffer::PushFront(met);
	return met;
}
double DistanceSensor::getVoltages() {
	double me = frc::AnalogInput::GetVoltage();
	frc::CircularBuffer::PushFront(me);
	return me;
}
double DistanceSensor::getAvgVolts() {
	double mete = frc::AnalogInput::GetAverageVoltage();
	frc::CircularBuffer::PushFront(mete);
	return mete;
}
double DistanceSensor::getAvgDistance() {
	int minidx = 0, maxidx = 0;
	for (i = 0; i < 10; i = i + 1) {
		if () {

		}
	}
}

