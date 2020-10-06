/*******************************************************************************
* AmbaSat-1 LED Flash
* 11th January 2020
* Version 1.0
* Filename: main.cpp
*
* Copyright (c) 2020 AmbaSat Ltd
* https://ambasat.com
*
* Licensed under Creative Commons Attribution-ShareAlike 3.0
*
* Use this application to test the circuitry of your AmbaSat-1 Satellite
* Once the code is uploaded, the onboard LED should flash on and off every second 
*
* modified by Alan Johnston KU2Y to flash Villanova ARC callsign W3YP
*
* ******************************************************************************/

#include <Arduino.h>

#define LED_PIN 9
int time = 250;  // time to send a Morse dit (dot)

// ==============================================================================
void setup() {
    Serial.begin(9600);        // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_PIN, OUTPUT);
}
void dit() // Morse code dit (dot)
{
	
  	digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //	Serial.println ("On");  
  	delay(time);                       
  	digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
 // 	Serial.println ("Off");
  	delay(time);                       
} 
void dah() // Morse code dah (dash)
{
	
  	digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //	Serial.println ("On");  
  	delay(3*time);                       
  	digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
 // 	Serial.println ("Off");
  	delay(time);                       
} 
void pause()  // space between letters
{
	delay(3*time);
}
// ==============================================================================
void loop() 
{
	// flash W3YP
	
	dit(); dah(); dah(); pause();
	dit(); dit(); dit(); dah(); dah(); pause();
	dah(); dit(); dah(); dah(); pause();
	dit(); dah(); dah(); dit(); pause();
	pause();
	pause();
} 
