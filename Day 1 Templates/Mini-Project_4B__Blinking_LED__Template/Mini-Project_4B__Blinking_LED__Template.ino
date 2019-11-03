//                          Mini Project: Blink LED
// Your code should make an LED turn on and off. It should switch states every second and run forever.

//                            Things to Rememeber
// HIGH makes electricity go. LOW makes no electricity go.
// OUTPUT: Make electricity flow. INPUT reads the amount of electricity flowing       
// Delay: Countinues the current action for a certain emount of miliseconds
// pinMode(): makes a pin  an INPUT or OUTPUT. Always goes in setup 
// digitialWrite(): Makes a pin HIGH or LOW. Usually goes in loop

//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them



int pin = ;// Write the pin that your wire is plugged into. (2-9)

void setup() {
  pinMode(pin, );// Write Input or Output. 
}

void loop() {
  digitalWrite(pin, );   // turn the LED on. Write HIGH or LOW. 
  delay();                       // Keep the light turned on for 1 seconds. Write a number
  digitalWrite(pin, );    // turn the LED on. Write HIGH or LOW. 
  delay();                   // Keep the light turned off for 1 seconds. Write a number               
}
