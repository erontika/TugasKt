//Penggunaan sensor asap

const int sensor=  A0;
int lampu = 13;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(lampu, OUTPUT);
}

void loop() {
  sensorValue=analogRead(0);
  if (sensorValue >= 520){
    digitalWrite(lampu, HIGH);
  }
else {
  digitalWrite(lampu, LOW);
 }
}
