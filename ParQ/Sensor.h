/*
 * 	Sensor.h
 *	PREN2
 *  Created on: 08.03.2013
 *  Author: Jonas Pfister
 */

#ifndef SENSOR_H_
#define SENSOR_H_
#include "ParQ.h"

typedef enum Sensor
{BlaBla

}Sensor_t;

Sensor_t* getSensorData(Sensor_t status);
int getDistance(int sensNr);
int getAngle(void);




#endif /* SENSOR_H_ */
