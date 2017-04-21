void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

int sensorValue=0;

void loop() {
  sensorValue = analogRead(A0);
  float voltage=sensorValue *(5.0/1023.0);
  float percentage=map(sensorValue,0,1023,0,100);
  Serial.print("Voltage : ");
  Serial.print(voltage);
  Serial.print("\t Pourcentage : ");
  Serial.println(percentage);
  delay(1000);

}
