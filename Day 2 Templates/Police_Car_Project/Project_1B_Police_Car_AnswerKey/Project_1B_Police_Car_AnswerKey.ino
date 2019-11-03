int LED1Pin = 2;
int LED2Pin = 3;
int buzzerPin = 4; 
int readPin = 7;
int buttonPin = 8; 

void setup() {
  Serial.begin(9600);
  pinMode(readPin, INPUT);
  pinMode(buttonPin, OUTPUT );
  pinMode(LED1, OUTPUT ); 
  pinMode(LED2, OUTPUT);
}

void loop() {
  
  digitalWrite(buttonPin, HIGH);
  int reading = digitalRead(readPin);

  Serial.println(reading);

  if(reading == 1)
  {
    tone(buzzerPin, 1000);
    digitalWrite(LED1Pin, HIGH);
    digitalWrite(LED2Pin, LOW);
    delay(200);
    
    tone(buzzerPin, 200);
    digitalWrite(LED1Pin, LOW);
    digitalWrite(LED2Pin, HIGH);
    delay(200);
  }
  else if(reading == 0)
  {
    noTone(buzzerPin);
    digitalWrite(LED1Pin, LOW);
    digitalWrite(LED2Pin, LOW);
  }
}
