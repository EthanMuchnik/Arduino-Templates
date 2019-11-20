int LED1 = 2; //This is the pin that the electricity information will go to. Put in the correct number.
int LED2 = 3;
int buzzerPin = 4; //This will give electricity to the buzzer. Put in the correct number.
int readPin = 7;
int buttonPin = 8; //This pin is the digitalWrite() pin and will give electricty. Put in the correct number.

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
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(200);
    
    tone(buzzerPin, 200);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(200);
  }
  else if(reading == 0)
  {
    noTone(buzzerPin);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
}
