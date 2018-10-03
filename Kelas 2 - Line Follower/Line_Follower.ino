const int E1 = 5;     // Seberapa kencang Motor Kiri berputar
const int M1 = 4;     // Arah dari putaran Motor Kiri
const int E2 = 6;     // Seberapa kencang Motor Kanan berputar
const int M2 = 7;     // Arah dari putaran Motor Kanan
const int LDR1 = A0;  // Pin untuk LDR 1 di sisi Kiri
const int LDR2 = A1;  // Pin untuk LDR 2 di sisi Kanan
int nilaiLDR1 = 0;    // Variabel untuk nilai yg dihasilkan LDR 1
int nilaiLDR2 = 0;    // Variabel untuk nilai yg dihasilkan LDR 2

void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  nilaiLDR1 = analogRead(LDR1);
  nilaiLDR2 = analogRead(LDR2);

  if(nilaiLDR1 <= 300 && nilaiLDR2 <= 300){
    maju();
  } else if (nilaiLDR1 >= 800 && nilaiLDR2 < 300){
    kiri();
  } else if (nilaiLDR1 < 300 && nilaiLDR2 >= 800){
    kanan();
  }
}

void maju(){
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  analogWrite(E1, 100);
  analogWrite(E2, 100);
  delay(100);
}

void mundur(){
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  analogWrite(E1, 100);
  analogWrite(E2, 100);
  delay(100);
}

void kiri(){
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  analogWrite(E1, 100);
  analogWrite(E2, 100);
  delay(100);
}

void kanan(){
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  analogWrite(E1, 100);
  analogWrite(E2, 100);
  delay(100);
}
