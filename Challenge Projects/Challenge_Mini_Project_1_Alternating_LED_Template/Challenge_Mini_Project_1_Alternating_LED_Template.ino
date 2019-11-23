//                          Mini Project: Alternating LED
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


//Write the pin that your wire is plugged into. (2-13)
int pin1 = ;
int pin2 = ;

void setup() {
  // Set the mode of the pins to INPUT or OUTPUT
  pinMode(pin1, );
  pinMode(pin2, );
}

void loop() {
  //Make the first LED turn on and the second off. Keep that state for 1 second.
  digitalWrite(pin1, );
  digitalWrite(pin2, );
  delay();              
  
  //Make the first LED turn off and the second on. Keep that state for 1 second.
  digitalWrite(pin1, );  
  digitalWrite(pin2, );    
  delay();
}
