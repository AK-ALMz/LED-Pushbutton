#include <Arduino.h>
#define LEDpin 7 //led on pin 7
#define PBUTTON 8 //button on pin 8
void setup() {
  // put your setup code here, to run once:
  pinMode(PBUTTON, INPUT);
  pinMode(LEDpin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 
 while (digitalRead(PBUTTON)){ //if button pressed
  digitalWrite(LEDpin, HIGH);
 }
 digitalWrite(LEDpin, LOW);
}