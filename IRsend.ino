/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */


#include <IRremote.h>

IRsend irsend;
int buttonPin1 = 5;
int buttonState = LOW;

void setup()
{
 pinMode(buttonPin1,INPUT);
 Serial.begin(9600);  
}

void loop() {
	
   
	buttonState = digitalRead(buttonPin1);
	    Serial.print(buttonState);

	if(buttonState == 1){
		irsend.sendSony(0x908, 12);
		delay(40);
    Serial.println("high");
	}	

   if(buttonState == 0){ 
   irsend.sendSony(0xb99, 12);
   delay(40);
   Serial.println("low");

}

  delay(1000);
}
