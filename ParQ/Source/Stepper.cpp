/*
 *	Stepper.cpp
 *	PREN 2
 *  Created on: 08.03.2013
 *  Author: Jonas
 */

#include "Stepper.h"

/***********************************************************
* Spulen vom Strom befreien.
* @param Pointer auf Motor
* @return void
***********************************************************/
void disableStepper(stepper_t *aStepper)
{
  aStepper->stepperStatus=DISABLED;
  digitalWrite(aStepper->statusPin, LOW);
}

/***********************************************************
* Schrittmotor blockieren
* @param Pointer auf Motor
* @return void
***********************************************************/
void enableStepper(stepper_t *aStepper)
{
  aStepper->stepperStatus=ENABLED;
  digitalWrite(aStepper->statusPin, HIGH);

}

/***********************************************************
* Digital I/O f?r Motorensteuerung werden als Output
* definiert.
* @param Pointer auf Motor
* @return void
***********************************************************/
void initStepper(stepper_t *aStepper)
{
  pinMode(aStepper->statusPin, OUTPUT);
  pinMode(aStepper->modePin, OUTPUT);
  pinMode(aStepper->directionPin, OUTPUT);
  pinMode(aStepper->clockPin, OUTPUT);
  digitalWrite(aStepper->clockPin, HIGH);

  switch (aStepper->stepperStatus){
   case DISABLED:
	   disableStepper(aStepper);
	   break;
   case ENABLED:
	   enableStepper(aStepper);
	   break;
   case RUN:
	   enableStepper(aStepper);
	   break;
  }

  switch (aStepper->stepperMode){
  case FULL:
	  fullStep(aStepper);
	  break;
  case HALF:
	  halfStep(aStepper);
	  break;
  }

  switch (aStepper->direction){
  case FORWARD:
	  forward(aStepper);
	  break;
  case BACKWARD:
	  backward(aStepper);
	  break;
  }

}

/***********************************************************
* Drehrichtung auf vorwärts stellen.
* @param Pointer auf Motor
* @return void
***********************************************************/
void forward(stepper_t *aStepper)
{
	aStepper->direction = FORWARD;
	digitalWrite(aStepper->directionPin, HIGH);
}

/***********************************************************
* Drehrichtung auf rückwärts stellen.
* @param Pointer auf Motor
* @return void
***********************************************************/
void backward(stepper_t *aStepper)
{
	aStepper->direction = BACKWARD;
	digitalWrite(aStepper->directionPin, LOW);
}


/***********************************************************
* Schrittmodus auf Ganzschritt wechseln
* @param Pointer auf Motor
* @return void
***********************************************************/

void fullStep(stepper_t *aStepper)
{
	aStepper->stepperMode = FULL;
	digitalWrite(aStepper->modePin, LOW);
}

/***********************************************************
* Schrittmodus auf Halbschritt wechseln
* @param Pointer auf Motor
* @return void
***********************************************************/

void halfStep(stepper_t *aStepper)
{
	aStepper->stepperMode = HALF;
	digitalWrite(aStepper->modePin, HIGH);
}




