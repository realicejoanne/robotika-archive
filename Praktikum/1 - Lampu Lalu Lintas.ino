//Tugas 1: Lampu Lalu Lintas dengan ketentuan merah-merah kuning-hijau-kuning-merah

int redled = 3;
int yellowled = 4;
int greenled = 5;

void setup(){
	pinMode (3, OUTPUT);
	pinMode (4, OUTPUT);
	pinMode (5, OUTPUT);
}

void loop(){
	//merah
	digitalWrite (redled, 1);
	delay(9000);
	digitalWrite (redled, 0);
	//merah kuning
	digitalWrite (redled, 1);
	digitalWrite (yellowled, 1);
	delay(3000);
    digitalWrite (redled, 0);
	digitalWrite (yellowled, 0);
	//hijau
    digitalWrite (greenled, 1);
	delay (9000);
	digitalWrite (greenled, 0);
	//kuning
	digitalWrite (yellowled, 1);
	delay(3000);
	digitalWrite (yellowled, 0);
}
