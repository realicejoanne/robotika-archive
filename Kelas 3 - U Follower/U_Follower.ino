void setup() {
  // put your setup code here, to run once:

}

void loop() {
  pingJarakDepan();
  pingJarakKanan();

  if((cmKanan >= 30 && cmKanan <= 35) && cmDepan > 30){
    maju()
  }

  if(cmKanan > 35 && cmDepan > 30){
    kanan()  
  }

  if(cmKanan < 30 || cmDepan < 30){
    kiri()
  }
}

void maju()

void mundur()

void kiri()

void kanan()

void pingJarakKanan()

void pingJarakDepan()
