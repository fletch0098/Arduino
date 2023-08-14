
#include "Led.h"
#include "Button.h"

// Defines
#define BTN_1 4

// Instantiate Classes
Led led1(LED_BUILTIN);
Button btn1(BTN_1);

// i to allow for differnt event handeling
int i = 0;

// the setup function runs once when you press reset or power the board
void setup() {

  // Setup serial for logging
  Serial.begin(9600);

}

// the loop function runs over and over again forever
void loop() {

  // Update routines
  led1.update();
  btn1.update();

  if(btn1.getWasShortPressed()){
    logInfo("WasShortPressed");

    // logInfo("flashShort");
    // led1.flashShort();

    // logInfo("flashLong");
    // led1.flashLong();

    // logInfo("flash 5000");
    // led1.flash(5000);

    // logInfo("blink");
    // led1.blink();
    
    logInfo("blinkFast");
    led1.blinkFast();

    // logInfo("on");
    // led1.on();
  }

  if(btn1.getWasDblPressed()){
    logInfo("WasDblPressed");

      logInfo("Off");
      led1.off();
  }

  // if(btn1.getIsLongPressing()){
  //   logInfo("IsLongPressing");
  // }

  // if(btn1.getWasLongPressed()){
  //   logInfo("WasLongPressed");
  // }

}

// Logging functions for ease
void logInfo(String message){
  // print
  Serial.print(message);
  // New line
  Serial.println();
}