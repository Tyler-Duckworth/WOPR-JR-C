/*
 * UltrasonicSerial.cpp
 *
 *  Created on: Apr 2, 2017
 *      Author: Ethan Duckworth
 */

#include <Hardware/UltrasonicSerial.h>

UltrasonicSerial::UltrasonicSerial() {
	serial = NULL;
	distancestring = "No data.";
	lastGoodValue = 0;
}
string readout;
UltrasonicSerial::portReadout() {
	try {
		if (serial == NULL) {
			serial.reset(new SerialPort(9600, SerialPort::kOnboard, 8, SerialPort::kParity_None, SerialPort::kStopBits_One));
			serial->SetTimeout(0.1);
		}

		if (serial->GetBytesReceived() > 0) {
			char buffer [];
			int count = 1000000;
			serial->Read(buffer, count);
			readout = new string(buffer);
			this->distancestring = readout;
		}
		return this->distancestring;
	}
	catch (exception& e ) {
		return "0";
	}
}
UltrasonicSerial::getDistance() {
	string read = readout.replace(0, 1, "");
	if (read == "No data.") {
		return 0;
	}
	bool hasNonZero = false;
	char array [] = read.c_str();
	string fread = "";
	for (int i = 0; i < read.length(); i++) {
		if (array[i] != '0') {
			hasNonZero = true;
		}
		if (!hasNonZero) {
			fread = read.substr(i+1, read.length()-1);
		}
	}
	double ret = 0;
	try {
		ret = stoi(fread) / 1000.0;
	}
	catch (exception& e) {
		ret = lastGoodValue;
	}
	if(ret <= 0) {
		ret = lastGoodValue;
	}
	return ret;
}
