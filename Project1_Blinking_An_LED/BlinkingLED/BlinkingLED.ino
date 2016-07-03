/*
 * Tutorial Project 1 - Blinking LED
 */

int ledPin = 13;

void setup() {
  //initialize pins as outputs
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // power ledPin on
  digitalWrite(ledPin, HIGH);
  // wait 1 second
  delay(1000);  
  // power ledPin off
  digitalWrite(ledPin, LOW);
  // wait 1 second
  delay(1000);
}
