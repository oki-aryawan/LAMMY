/*

  This code is writen for PKM KC LAMMY 2022
  Started written at 27/06/2022
  - Oki Aryawan

  Semoga Berjaya

*/


//Calibrate sensor

int ph;
float vol;


void setup() {

  Serial.begin(9600);
  pinMode(ph, INPUT);

}

void loop() {
  ph = analogRead(A0);
  vol = ph * (5.0 / 1023.0);
  Serial.println(vol);
  delay(500);

}
