//     Mini Project: Blink LED
// Your code should make an LED turn on and off. It should switch states every second and run forever.

//                            Things to Rememeber
// HIGH makes electricity go. LOW makes no electricity go.
// OUTPUT: Make electricity flow. INPUT reads the amount of electricity flowing       
// pinMode(): makes a pin  an INPUT or OUTPUT. Always goes in setup 
// digitialWrite(): Makes a pin HIGH or LOW. Usually goes in loop
// Serial.begin(): Sets up the printing area.
// Serial.println(): Prints thing sto the printing area 

//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them

int buttonPin = 8; //This pin is the digitalWrite() pin and will give electricty
int readPin = 2; //This is the pin that the electricity information will go to

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin, OUTPUT);
  pinMode(readPin, INPUT); // A read pin need INPUT put in instead of output
}

void loop() {
  digitalWrite(buttonPin,HIGH);
  
  int reading = digitalRead(readPin); // This variable is set equal to the result of readPin
  
  Serial.println(reading); //Prints the variable
}
