/*
==================================================================
V1.0 By Zac Ianculovici
23 Nov 2026

This firmware is a very simple example with the onboard BOOT button,
to test the functionality of the board with the garage door.
It will be updated to a full wireless version when I get the time to
code a complete, secure version via BLE. 
=====================================================================
*/

const int optoPin = 1;
const int buttonPin = 9;

bool buttonState = 1;
bool oldButtonState = 1;

void setup() {
    pinMode(optoPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop() {
    buttonState = digitalRead(buttonPin);
    if (buttonState && !oldButtonState) {
        digitalWrite(optoPin, HIGH);
        delay(300);
        digitalWrite(optoPin, LOW);
    }
    oldButtonState = buttonState;
}