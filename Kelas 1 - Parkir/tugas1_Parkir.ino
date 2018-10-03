// this constant won't change. It's the pin number of the sensor's output:
int ldr1 = A0;
int ldr2 = A1;
int mobil=0;
int inMobil=0;
int exMobil=0;
int val1 = 0;
int val2 = 0;
const int merah = 13;
const int kuning = 12;
const int hijau = 11;

void setup() {
  // initialize serial communication:
  pinMode(merah,OUTPUT);
  pinMode(kuning,OUTPUT);
  pinMode(hijau,OUTPUT);
  Serial.begin(9600);
}

void loop() {

val1 = analogRead(ldr1); // read the value from the sensor
  val2 = analogRead(ldr2);
  Serial.print("Intesitas Mobil masuk =");//prints the values coming from the sensor on the screen
  Serial.println (val1);
  Serial.print("Intesitas Mobil keluar =");
  Serial.println (val2);
    
    //SENSOR MOBIL MOBILANNYA
    if((val1>10 && val1<100) && inMobil == 0){
      //begitu gelap, berati artinya mobil baru masuk
      inMobil = 1;
    }
    if(inMobil == 1 && val1>100){
      //ini udah terang lagi, artinya mobil udah lewat
      inMobil = 0;
      mobil = mobil + 1;
    }
    //SENSOR MOBIL KELUAR
    if((val2>10 && val2<100) && exMobil == 0){
      //begitu gelap, berati artinya mobil baru masuk
      exMobil = 1;
    }

     if(exMobil == 1 && val2>100){
      //ini udah terang lagi, artinya mobil udah lewat
      exMobil = 0;
      mobil = mobil - 1;
    }
  Serial.print ("mobil = ");
  Serial.println (mobil); 

  if(mobil==0){
    digitalWrite(merah,LOW);
    digitalWrite(kuning,LOW);
    digitalWrite(hijau,HIGH);
    }
    else if(mobil>0 && mobil<100){
      digitalWrite(merah,LOW);
      digitalWrite(hijau,LOW);
      digitalWrite(kuning,HIGH);
    }
    else{
      digitalWrite(kuning,LOW);
      digitalWrite(merah,HIGH);
      digitalWrite(hijau,LOW);
    }
  
  delay(500);
}
