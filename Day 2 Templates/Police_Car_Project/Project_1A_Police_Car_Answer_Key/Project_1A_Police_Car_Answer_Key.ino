int LED1Pin = 2; 
int LED2Pin = 3;
int buzzerPin = 4; 

void setup() {
  pinMode(LED1Pin, OUTPUT ); 
  pinMode(LED2Pin, OUTPUT);
}

void loop() {
   
  tone(buzzerPin, 1000);
  digitalWrite(LED1Pin, HIGH);
  digitalWrite(LED2Pin, LOW);
  delay(200);
  
  tone(buzzerPin, 200);
  digitalWrite(LED1Pin, LOW);
  digitalWrite(LED2Pin, HIGH);
  delay(200);
}
