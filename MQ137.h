#ifndef MQ137_H
#define MQ137_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class MQ137
{
private:
	uint8_t _pin;
public:
	MQ137(uint8_t pin);
	float getPPM();
};
