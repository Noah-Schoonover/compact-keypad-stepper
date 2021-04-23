//-----------------------------------------------------------------------------------------
// StepperWrapper.cpp
//
//

#include "StepperWrapper.h"

//-----------------------------------------------------------------------------------------
// class StepperWrapper
//

//-----------------------------------------------------------------------------------------
// StepperWrapper::StepperWrapper (constructor)
//

StepperWrapper::StepperWrapper( int limitPin, int enablePin, int stepPin, int dirPin ) :
    AccelStepper( 1, stepPin, dirPin )
{

  this->enablePin = enablePin;
  setEnable(false);
  // setEnablePin(enablePin);
  pinMode(limitPin, INPUT_PULLUP);

}// end of StepperWrapper::StepperWrapper (constructor)
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// StepperWrapper::goHome
//

void StepperWrapper::goHome(){

  

}// end of StepperWrapper::goHome
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// StepperWrapper::goToIndex
//

bool StepperWrapper::goToIndex(const char* index){

  

}// end of StepperWrapper::goToIndex
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// StepperWrapper::setEnable
//

void StepperWrapper::setEnable(bool enable){

  if (enable) {
    digitalWrite(enablePin, HIGH);
  } else {
    digitalWrite(enablePin, LOW);
  }

}// end of StepperWrapper::setEnable
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// StepperWrapper::StepperWrapper (destructor)
//

StepperWrapper::~StepperWrapper(){

}// end of StepperWrapper::StepperWrapper (destructor)
//-----------------------------------------------------------------------------------------

//end of class StepperWrapper
//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------
