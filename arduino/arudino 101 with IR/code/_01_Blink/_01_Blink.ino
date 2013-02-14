/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.

  Updated by @mpinner for arduino intro courses at @crashspacela

  You should learn
   - to select board, serial, and upload code
   - setup() loop()
   - variables and pin 13
   - delay()
   
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 hes the LED on Teensy 2.0
// Pin 6 hes the LED on Teensy++ 2.0
// give it a name:

#define LED_PIN 13

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
