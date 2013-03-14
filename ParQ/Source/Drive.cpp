
/*
 *	Drive.cpp
 *	PREN 2
 *  Created on: 08.03.2013
 *  Author: Jonas
 */
#include "Drive.h"

/***********************************************************
* Ein Schritt machen.
* @param Pointer auf Motor
* @return void
***********************************************************/

void takeStep(stepper_t *aStepper)
{
	digitalWrite(aStepper->clockPin, LOW);
	digitalWrite(aStepper->clockPin, HIGH);
}


/***********************************************************
* Eine Kurve mit vorgegebenem Winkel und Radius fahren.
* @param Winkel, Radius
* @return void
***********************************************************/

void makeCurve(int angle, int radius)
{

}


/***********************************************************
* Seitenwand detektieren, anhalten und Motoren deaktivieren.
* @param void
* @return void
***********************************************************/

void stop(void)
{
	/*if(getSensorData(sectorStop) <= garageDetection)
	{

	}
*/

}


/***********************************************************
* Beschleunigen
* @param Beschleunigung
* @return void
***********************************************************/

void accelerate(int acceleration)
{

}


/***********************************************************
* Endgeschwindigkeit festlegen
* @param Geschwindigkeit
* @return void
***********************************************************/

void setSpeed(int speed)
{

}


/***********************************************************
* In bestimmte Garage fahren
* @param Garagennummer
* @return void
***********************************************************/

void driveToGarage(int garageNr)
{

}
