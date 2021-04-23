
#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include <arduino.h>
#include "SevSeg.h"
#include "KeypadWrapper.h"
#include "StepperWrapper.h"
#include <Servo.h>

//-----------------------------------------------------------------------------------------
// class Controller
//
// holds information that is shared between Objects
//

// the following static constants set the Arduino pin numbers corresponding to
//   each display pin
static const int DIG1_COM_12 = 43;
static const int DIG2_COM_9 = 49;
static const int DIG3_COM_8 = 51;
static const int DIG4_COM_6 = 52;
static const int SEG_A_11 = 45;
static const int SEG_B_7 = 53;
static const int SEG_C_4 = 48;
static const int SEG_D_2 = 44;
static const int SEG_E_1 = 42;
static const int SEG_F_10 = 47;
static const int SEG_G_5 = 50;
static const int SEG_DP_3 = 46;

static const int KEYPAD_BUFFER_SIZE = 5;

static const int STEPPER_STEP_PIN = 12;
static const int STEPPER_DIR_PIN = 11;
static const int STEPPER_ENABLE_PIN = 13;

static const int SERVO_PIN = 3;

static const int LIMIT_SWITCH_PIN = 2;

class Controller{

	public:

		Controller();

		void init();
		void process();

        ~Controller();

	protected:



    private:

        void setupIO();
        void initSerialPort();
        void debug();

        void handleKeyPress(char key);

        KeypadWrapper *keypad;
        char keypadBuffer[KEYPAD_BUFFER_SIZE] = { 0 }; // initialized to zero
        void setupKeypad();

        SevSeg display;
        void setupDisplay();

        StepperWrapper *stepper;
        void setupStepper();

        Servo servo;
        int servoPosition;
        void setupServo();

};// end of class Controller
//-----------------------------------------------------------------------------------------

#endif // _CONTROLLER_H
