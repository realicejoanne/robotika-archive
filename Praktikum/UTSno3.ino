#include <Servo.h>

Servo myservo1;
Servo myservo2;
const int ledPIN = 5;
int pos = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPIN, OUTPUT);
  
  myservo1.attach(2);
  myservo2.attach(3);
}

void loop() {
  for (pos = 90; pos <= 180; pos += 1) { 
    myservo1.write(pos);
    digitalWrite(ledPIN, HIGH);
    delay(15); 
  }
  for (pos = 180; pos >= 90; pos -= 1) {
    myservo1.write(pos);
    digitalWrite(ledPIN, LOW);
    delay(15);
  }
}
