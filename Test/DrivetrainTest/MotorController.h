#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include <Arduino.h>

class MotorController
{
	public:
		MotorController();
		
		void begin(int leftA, int leftB, int leftEnb,int rightA, int rightB, int rightEnb);
		
		void outputLeft(float out);
		
		void outputRight(float out);
		
	private:
		int leftA;
		int leftB;
		int rightA;
		int rightB;
		int leftEnb;
		int rightEnb;
		
		float coerce(float val, float upper, float lower);
};

#endif