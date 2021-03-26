//-----------------------------------------------------------------------------------------
// Controller.cpp
//
//
// Main code for the rescue module.
//
// In the Arduino IDE, choose settings (must be done every time you switch projects!!!):
//
//	in "Tools" on Main Menu
//
//		Board: Arduino Mega or Mega 2560
//		Processor: ATmega 2560 (Mega 2560)
//		Port: COM? (Arduino Mega or Mega 2560)
//
//  Board Files Required:
//
//      none
//
//  Library Files Required:
//
//      Keypad
//          by Mark Stanley, Alexander Brevig (version 3.1.1)
//          To install:
//            Arduino IDE > Sketch > Include Library > Manage Libraries...
//            Type "keypad" in the search box
//            Scroll until you find the library by the proper authors
//                  (it's down there a ways)
//            Click "install"
//            The file will be added to your local libraries for use. Done.
//
//
//----------------------------------------------------
//
// Authors:
//    Noah Schoonover (03/26/21)
//
//
// -- IMPORTANT --
//
//      none
//
//-----------------------------------------------------------------------------------------


#include "Controller.h"


#define DEBUG_VERBOSE_CONTROLLER 0	// displays extra debugging messages on serial port

//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------
// class Controller
//
// This class is the main Controller (as in MVC structure).
//



const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {KEY_ROW_1, KEY_ROW_2, KEY_ROW_3, KEY_ROW_4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {KEY_COL_1, KEY_COL_2, KEY_COL_3, KEY_COL_4}; //connect to the column pinouts of the keypad

//Create an object of keypad
Keypad keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



//-----------------------------------------------------------------------------------------
// Controller::Controller (constructor)
//

Controller::Controller()
{

    // typically empty

}// end of Controller::Controller (constructor)
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::init
//
// top-level init that handles basic initialization and calls initSelf for specific init
// Must be called after instantiation to complete setup.
//

void Controller::init(){

    initSerialPort();

	setupIO();

	debug();

    setupDisplay();
    //setupKeypad();

	Serial.println("-- Continuing to control loop");

}// end of Controller::init
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::process
//
// this method is called every iteration in the main loop in order to
// perform MVC processing
//

void Controller::process(){

    display.refreshDisplay();

    char key = keypad.getKey();// Read the key

    // Print if key pressed
    if (key){
        Serial.print("Key Pressed : ");
        Serial.println(key);
    }

}// end of Controller::process
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::setupDisplay
//
//

void Controller::setupDisplay(){

    byte numDigits = 4;
    byte digitPins[] = {DIG1_COM_12, DIG2_COM_9, DIG3_COM_8, DIG4_COM_6};
    byte segmentPins[] = {SEG_A_11, SEG_B_7, SEG_C_4, SEG_D_2, SEG_E_1, SEG_F_10, SEG_G_5, SEG_DP_3};
    bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
    byte hardwareConfig = COMMON_CATHODE; // See README.md for options
    bool updateWithDelays = false; // Default 'false' is Recommended
    bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
    bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]

    display.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
    updateWithDelays, leadingZeros, disableDecPoint);

    //sevseg.setBrightness(90);
    display.setNumber(3141,3);

}// end of Controller::setupDisplay
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::setupKeypad
//
//

void Controller::setupKeypad(){
/* debug nps
    const byte ROWS = 4; //four rows
    const byte COLS = 4; //four columns

    char keys[ROWS][COLS] = {
      {'1','2','3','A'},
      {'4','5','6','B'},
      {'7','8','9','C'},
      {'*','0','#','D'}
    };

    byte rowPins[ROWS] = {KEY_ROW_1, KEY_ROW_2, KEY_ROW_3, KEY_ROW_4}; //connect to the row pinouts of the keypad
    byte colPins[COLS] = {KEY_COL_1, KEY_COL_2, KEY_COL_3, KEY_COL_4}; //connect to the column pinouts of the keypad

    //Create an object of keypad
    keypad = new Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
end debug nps */
}// end of Controller::setupKeypad
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::setupIO
//
// Sets up generic Digital and Analog Input/Output pins. Pins for dedicated functions such
// as SPI, U2C, or PWM are set up in other functions.
//

void Controller::setupIO() {

    //display.setupIO();

}// end Controller::setupIO
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::initSerialPort
//
// When using the boards without M4 chips, this function waited until the Serial object
// became active. When the Ardunio Serial Monitor Panel was not open, this caused a
// lockup. This also caused a lockup in standalone mode (not connected to Arduino IDE).
//
// On some non-M4 boards, a 1.5 second delay after Serial.begin is required or the
// first serial transmissions will be lost.
//
// The original Ardunio code comment stated that the wait is only necessary for a
// "native USB port".
//

void Controller::initSerialPort() {

  Serial.begin(9600);

  delay(1500);
  Serial.print("\n\n\n\n");
  Serial.println("--- Serial port initialized.");

}// end of Controller::initSerialPort
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// debug
//

void Controller::debug() {

	Serial.println("-- Debug Section\n");



}// end debug
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// Controller::Controller (destructor)
//

Controller::~Controller()
{

}// end of Controller::Controller (destructor)
//-----------------------------------------------------------------------------------------

//end of class Controller
//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------
