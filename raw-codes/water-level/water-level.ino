#define sensorPin A0

int val = 0;

void setup() {  
  Serial.begin(9600);
}

void loop() {
  int level = readSensor();
  
  Serial.print("Water level: ");
  Serial.println(level);
  delay(1000);
}

int readSensor() {
  val = analogRead(sensorPin);
  return val;
}
