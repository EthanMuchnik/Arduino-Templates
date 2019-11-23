int blueLEDPin = 2; 
int redLEDPin = 3;
int buzzerPin = 4; 

void setup() {
  pinMode(blueLEDPin, OUTPUT ); 
  pinMode(redLEDPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
   
  tone(buzzerPin, 1000);
  digitalWrite(blueLEDPin, HIGH);
  digitalWrite(redLEDPin, LOW);
  delay(200);
  
  tone(buzzerPin, 200);
  digitalWrite(blueLEDPin, LOW);
  digitalWrite(redLEDPin, HIGH);
  delay(200);
}
