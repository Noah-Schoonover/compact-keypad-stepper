
#ifndef _STEPPERWRAPPER_H
#define _STEPPERWRAPPER_H

#include <arduino.h>
#include <AccelStepper.h>

//-----------------------------------------------------------------------------------------
// class StepperWrapper
//

static const int STEPS_PER_REV = 200;
static const int STEPPER_INTERFACE_TYPE = 1; // set to 1 when using a driver

// 0 for clockwise to home, 1 for counter-clockwise
static const int HOME_DIR = 0;

static const int STEPS_TO_FIRST_DISK = 20;
static const int STEPS_PER_DISK = 20;

class StepperWrapper : public AccelStepper {

	public:

		StepperWrapper(int limitPin, int enablePin, int stepPin, int dirPin);

		void goHome();
		bool goToIndex(const char* index);
		void setEnable(bool enable);

		~StepperWrapper();

	private:

		int enablePin;


};// end of class StepperWrapper
//-----------------------------------------------------------------------------------------

#endif // _STEPPERWRAPPER_H
