/* Tugas 3: Ping menggunakan sensor suara */

const int pingPin = 7;
int led = 3;
const int button = 4;

void setup() {
  pinMode (led, OUTPUT);
  pinMode (button, INPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, inches, cm, brightnes;
  int buttonX =0 ;
  buttonX = digitalRead(button);
 
  if (buttonX == HIGH){
	pinMode(pingPin, OUTPUT);
	digitalWrite(pingPin, LOW);
	delayMicroseconds(2);
	digitalWrite(pingPin, HIGH);
	delayMicroseconds(5);
	digitalWrite(pingPin, LOW);

	pinMode(pingPin, INPUT);
	duration = pulseIn(pingPin, HIGH);

  
	inches = microsecondsToInches(duration);
	cm = microsecondsToCentimeters(duration);
 
	Serial.print(inches);
	Serial.print("in, ");
	Serial.print(cm);
	Serial.print("cm");
	Serial.println();
    brightnes = brightness(cm); 
    analogWrite(led,brightnes);
  }
  else {
    analogWrite(led,0);
  }
}

float brightness(long cm){
  float x = cm*225/400;
  return x;
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
