/*
 *	Drive.h
 *	PREN 2
 *  Created on: 08.03.2013
 *  Author: Jonas
 */

#ifndef DRIVE_H_
#define DRIVE_H_

#include "TimerOne.h"
#include "Stepper.h"
#include "Sensor.h"
#define static garageDetection 5

void takeStep(stepper_t *aStepper);
void makeCurve(int angle, int radius);
void stop(void);
void accelerate(int acceleration);
void setSpeed(int speed);
void driveToGarage(int garageNr);

#endif /* DRIVE_H_ */
