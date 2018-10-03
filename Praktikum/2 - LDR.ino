//Tugas 2: LDR yang kalau disinari maka LEDnya mati dan sebaliknya kalau tidak ada sinar maka LED menyala

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 11;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
 
  Serial.println(sensorValue);
  if(sensorValue<50){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
