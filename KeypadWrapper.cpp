//-----------------------------------------------------------------------------------------
// KeypadWrapper.cpp
//
//

#include "KeypadWrapper.h"

//-----------------------------------------------------------------------------------------
// class KeypadWrapper
//
// Wraps the Keypad object for a project-specific interface as well as a
// separate scope for the necessary parameters.
// (I didn't like having them in controller)
//

char myKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte myRowPins[ROWS] = {KEY_ROW_1, KEY_ROW_2, KEY_ROW_3, KEY_ROW_4}; //connect to the row pinouts of the keypad
byte myColPins[COLS] = {KEY_COL_1, KEY_COL_2, KEY_COL_3, KEY_COL_4}; //connect to the column pinouts of the keypad

//-----------------------------------------------------------------------------------------
// KeypadWrapper::KeypadWrapper (constructor)
//

KeypadWrapper::KeypadWrapper() :
    Keypad( makeKeymap(myKeys), myRowPins, myColPins, ROWS, COLS )
{


}// end of KeypadWrapper::KeypadWrapper (constructor)
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// KeypadWrapper::KeypadWrapper (destructor)
//

KeypadWrapper::~KeypadWrapper(){

}// end of KeypadWrapper::KeypadWrapper (destructor)
//-----------------------------------------------------------------------------------------

//end of class KeypadWrapper
//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------
