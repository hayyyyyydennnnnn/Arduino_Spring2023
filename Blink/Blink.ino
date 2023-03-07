/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/


//Programmer: Hayden Coates
//Date: 3.3.2023
//Program: Blink

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn pin 12 to high so it will turn on
   digitalWrite(11, HIGH);   // turn pin 11 to high so it will turn on 

  delay(500);                       // wait for a second
  digitalWrite(12, LOW);    //  turn pin 12 to low so it will turn off
   digitalWrite(11, LOW);    //  turn pin 11 to low so it will turn off 

  delay(200);                       // wait for a second

  digitalWrite(12, HIGH);   // turn pin 12 to high so it will turn on
     digitalWrite(10, HIGH);    //  turn pin 10 to high so it will turn off 

  delay(300);                       // wait for a second and a half
  digitalWrite(12, LOW);    //  turn pin 12 to low so it will turn off 
      digitalWrite(10, LOW);    //  turn pin 10 to low so it will turn off 

  delay(400);                       // wait for two second

  
}
