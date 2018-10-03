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

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT); //Merah1
   pinMode(12, OUTPUT); //Kuning1
    pinMode(11, OUTPUT); //Ijo1
     pinMode(10, OUTPUT); //Merah2
     pinMode(9, OUTPUT); // Kuning2
      pinMode(8, OUTPUT); // Ijo2
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   //Merah1 Nyala
  digitalWrite(8, HIGH);   // IJo2 Nyala
  delay(120000);
  
  digitalWrite(8,LOW);  //Ijo2 Mati 
  digitalWrite(9,HIGH);  //Kuning2 Nyala       
  delay(60000);          

  digitalWrite(9,LOW) //Kuning2 Mati
  digitalWrite(13, LOW);    // Merah1 mati
  digitalWrite(12, HIGH); // kuning1 nyala
  digitalWrite(10,HIGH); //Merah 2nyala
  delay(60000);
  
  digitalWrite(12,LOW); //Kuning1 mati
  digitalWrite(11,HIGH);//ijo1 nyala
  delay(120000);
  
  digitalWrite(11,LOW); // ijo1 mati
  digitalWrite(10,LOW); //merah2 mati
  digitalWrite(12,HIGH); //kuning1 nyala
  digitalWrite(9,HIGH); //kuning2 nyala
  delay(60000);

  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  }
