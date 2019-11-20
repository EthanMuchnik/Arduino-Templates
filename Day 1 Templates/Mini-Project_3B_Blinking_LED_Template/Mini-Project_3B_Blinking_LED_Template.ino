//                          Mini Project: Blinking LED
// Your code should make an LED turn on and off. It should switch states every second.

       Things to Rememeber:
// HIGH: makes electricity go.            LOW: makes no electricity go.
// OUTPUT: Make electricity flow.         INPUT: reads the amount of electricity flowing       
// delay(miliseconds): Countinues the current action for a certain amount of miliseconds      ||     1000 miliseconds = 1 seconds
// pinMode(pin, OUPUT/LOW): makes a pin  an INPUT or OUTPUT. 
// digitalWrite(pin, HIGH/LOW): Makes a pin Output HIGH or LOW. 

//setup(): Runs once
//loop(): Never stops running
//declare variables that are used in both functions outside of themthem



int pin = ;   // Write the pin that your wire is plugged into (2-13).

void setup() {
  pinMode(pin, );   // Write INPUT or OUTPUT. 
}

void loop() {
  digitalWrite(pin, );   // Turn the LED on. Write HIGH or LOW. 
  delay();                       // Keep the light turned on for 1 second. Write a number.
  digitalWrite(pin,);    // Turn the LED on. Write HIGH or LOW. 
  delay();                       // Keep the light turned off for 1 second. Write a number.               
}
