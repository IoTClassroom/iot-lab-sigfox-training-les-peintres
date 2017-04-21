// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN (pin 13) as an output.
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int i;
  for (i=0;i<51;i++){
    int j=i*5;
    analogWrite(9, i*5);    
    Serial.print("Brightness : ");
    Serial.println(j); 
    delay(50);  
  }

  delay (1000);
  
                      
                    
}
