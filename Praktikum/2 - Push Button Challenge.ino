//Tugas 2: LED yang dinyalakan oleh push button dari remang-remang hingga paling terang

const int button = 2;
const int led = 10;

int fading = 1;
int buttonState = 0;
int cahaya;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  buttonState = digitalRead(button);
  if(buttonState == HIGH){
    if(cahaya<255){
		cahaya = cahaya + fading;
    }
    analogWrite(led,cahaya);
    delay(300);
    analogWrite(led, 0);
    delay(300);
  }
  else {
    while(cahaya>=0){
		analogWrite(led,cahaya);
		delay(300);
		analogWrite(led, 0);
		delay(300);
		cahaya = cahaya - fading;
    }
    analogWrite(led,0);
    cahaya = 0;
  }
}
