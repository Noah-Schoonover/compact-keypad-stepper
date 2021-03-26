
#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include <arduino.h>
#include "SevSeg.h"
#include "KeypadWrapper.h"

//-----------------------------------------------------------------------------------------
// class Controller
//
// holds information that is shared between Objects
//

// the following static constants set the Arduino pin numbers corresponding to
//   each display pin
static const int DIG1_COM_12 = 10;
static const int DIG2_COM_9 = 7;
static const int DIG3_COM_8 = 6;
static const int DIG4_COM_6 = 4;
static const int SEG_A_11 = 9;
static const int SEG_B_7 = 5;
static const int SEG_C_4 = 2;
static const int SEG_D_2 = 12;
static const int SEG_E_1 = 11;
static const int SEG_F_10 = 8;
static const int SEG_G_5 = 3;
static const int SEG_DP_3 = 13;

static const int KEYPAD_BUFFER_SIZE = 5;

class Controller{

	public:

		Controller();

        void setupIO();
		void initSerialPort();

		void init();
		void process();

		void debug();

		void setupKeypad();
        void setupDisplay();

        ~Controller();

	protected:

        KeypadWrapper *keypad;
        char keypadBuffer[KEYPAD_BUFFER_SIZE] = { 0 }; // initialized to zero
        int keypadBufferPos = 0;

        SevSeg display;
        int time;


};// end of class Controller
//-----------------------------------------------------------------------------------------

#endif // _CONTROLLER_H
