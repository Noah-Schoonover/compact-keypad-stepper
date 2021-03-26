
#ifndef _KEYPADWRAPPER_H
#define _KEYPADWRAPPER_H

#include <arduino.h>
#include <Keypad.h>

//-----------------------------------------------------------------------------------------
// class KeypadWrapper
//
// Wraps the Keypad object for a project-specific interface as well as a
// nesting scope for the necessary Keypad parameters.
// (I didn't like having them in controller)
//

// the following static constants set the Arduino pin numbers corresponding to
//   each keypad pin
static const int KEY_ROW_1 = 14;
static const int KEY_ROW_2 = 15;
static const int KEY_ROW_3 = 16;
static const int KEY_ROW_4 = 17;
static const int KEY_COL_1 = 18;
static const int KEY_COL_2 = 19;
static const int KEY_COL_3 = 20;
static const int KEY_COL_4 = 21;

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

class KeypadWrapper : public Keypad {

	public:

		KeypadWrapper();

		~KeypadWrapper();

	private:


};// end of class KeypadWrapper
//-----------------------------------------------------------------------------------------

#endif // _KEYPADWRAPPER_H
