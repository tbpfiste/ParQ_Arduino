/*
 * 	Stepper.h
 * 	PREN2
 *  Created on: 08.03.2013
 *  Author: Jonas Pfister
 */

#ifndef STEPPER_H_
#define STEPPER_H_

#include "Arduino.h"

typedef enum{ENABLED, DISABLED, RUN}status_t;
typedef enum{HALF, FULL}mode_t;
typedef enum{FORWARD, BACKWARD}direction_t;
typedef struct stepper {int statusPin;
						int modePin;
						int directionPin;
						int clockPin;
						status_t stepperStatus;
						mode_t stepperMode;
						direction_t direction;
						int stepsToDo;
}stepper_t;
void disableStepper(stepper_t *aStepper);
void enableStepper(stepper_t *aStepper);
void initStepper(stepper_t *aStepper);
void forward(stepper_t *aStepper);
void backward(stepper_t *aStepper);
void fullStep(stepper_t *aStepper);
void halfStep(stepper_t *aStepper);

#endif /* STEPPER_H_ */
