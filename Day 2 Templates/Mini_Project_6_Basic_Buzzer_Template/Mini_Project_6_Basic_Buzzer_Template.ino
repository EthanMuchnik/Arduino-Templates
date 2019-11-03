//                        Mini Project: Blink LED
// Your code should make the buzzer play a note. 
//If you have more time, try to make the buzzer play a 5 note song with each note being a different length

//                            Things to Rememeber
// Delay: Countinues the current action for a certain emount of miliseconds
// tone: Takes in the pin and then the frequency: tone(pin, frequency)
// noTone: This simply ends your song/buzz. noTone(pin)

//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them

int pin = 5;
int frequency = 500;

void setup() {
  //nothing to setup
}

void loop() {
  //  Play a note at any frequency. See what happens when you change it. P.S only go between 50 and 13000. Write the correct variables in the function.
  tone(5,500);
}
