/*
 Name:		Esp2RaspberryArray.ino
 Created:	6/27/2023 4:34:47 PM
 Author:	Imami Joel Betofe
*/

#include <HardwareSerial.h>


HardwareSerial espSerial(1);
float data[5] = { 1.23, 4.56, 7.89, 0.12, 3.45 };

void setup() {
	// Initialize the serial port at 115200 baud
	Serial.begin(115200);
	// Initialize the software serial port at 9600 baud
	espSerial.begin(115200, SERIAL_8N1, 18, 19);
}

void loop() {
	// Send the array of float values to the Raspberry Pi
	espSerial.write((byte*)data, sizeof(data));
	delay(1000);
}

