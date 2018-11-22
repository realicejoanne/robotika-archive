const int sensorPin = A3;
const int ledMERAH = 6;
const int ledBIRU = 5;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledMERAH, OUTPUT);
  pinMode(ledBIRU, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);

  Serial.println(sensorValue);
  if(sensorValue>255){
    digitalWrite(ledMERAH, HIGH);
    delay(10);
    digitalWrite(ledBIRU, LOW);
  }
  else {
    digitalWrite(ledBIRU, HIGH);
    delay(10);
    digitalWrite(ledMERAH, LOW);
  }
}
