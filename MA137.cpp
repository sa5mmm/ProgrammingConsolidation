#include "MQ137.h"


/*
Assign the pin number in which data is being sent to the Arduino.
//Define your object. ObjectName is what you want to call your object in the rest of your program. pin is the analog pin in which you connected your MQ137 to your arduino.
MQ137 ObjectName(pin);
*/

MQ137::MQ137(uint8_t pin)
{
	_pin = pin;
}

float MQ137::getPPM()
{
	float PPM = 0.0;//We need some calculation here
	return PPM;
}
