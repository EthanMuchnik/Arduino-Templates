#define PIN_BUZZER 7
#define PIN_ADD 3

bool running = true;

int frequency = 10;

void add() {
  if(frequency < 100) frequency += 10;
}

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_ADD, INPUT);

  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(PIN_ADD), add, RISING);
}

void loop() {
  Serial.println(frequency);
  tone(PIN_BUZZER, frequency);
}
