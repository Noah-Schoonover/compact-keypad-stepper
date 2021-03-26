//-----------------------------------------------------------------------------------------
// rescue.ino
//
// For all Skoonie projects, the Arduino ino file does NOTHING except create the Controller object
// and start it up.
//
// See notes at the top of the Controller.cpp file for details pertaining to each project.
//

#include "Controller.h"

Controller controller;

//-----------------------------------------------------------------------------------------
// setup
//
// This is the standard Arduino "setup" function which is called once on startup.
//

void setup() {

  controller.init();

}// end of setup
//-----------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------
// loop
//
// This is the standard Arduino "loop" function which loops continuously after "setup"
// function has been executed.
//
// At 1000 loops, the time it took for those loops will be printed on the serial com
// port. This is useful for debugging and code comparison.
//

void loop(void) {

  controller.process();

}// end of loop
//-----------------------------------------------------------------------------------------
