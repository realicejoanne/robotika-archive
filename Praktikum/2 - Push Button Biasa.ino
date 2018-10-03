//Tugas 2: Push Button yang kalau dipencet lampunya nyala

const int buttonSaya = 2;     // mengubah ‘buttonSaya’ menjadi variabel pin 2
const int ledSaya =  3;      // mengubah ‘ledSaya’ menjadi variabel pin 3
int buttonStatusSaya = 0;         // mengubah ‘buttonStatusSaya’ menjadi variable 0
 
void setup(){
   pinMode(ledSaya, OUTPUT); // mengubah ‘ledSaya’ menjadi pin OUTPUT
   pinMode(buttonSaya, INPUT); //mengubah ‘buttonSaya’ menjadi pin INPUT
}
 
void loop(){
	buttonStatusSaya = digitalRead(buttonSaya); 
	if (buttonStatusSaya == HIGH){
		digitalWrite(ledSaya, HIGH);
	} 
	else {
		digitalWrite(ledSaya, LOW);
	}
}
