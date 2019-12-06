//                        Mini Project: Basic Buzzer
// 1. This code should make the buzzer play a note. Try to change the frequency and see what happens.

// 2. After that, try to use the noTone() command to end your song after 5 seconds. Hint: You have to use setup().





//                            Things to Rememeber:

// delay(miliseconds): Countinues the current action for a certain amount of miliseconds      ||     1000 milliseconds = 1 second
// tone(pin, frequency): Takes in the pin and then the frequency to play a certain note
// noTone(pin): This simply ends your song/buzz
// pinMode(pin, OUPUT/INPUT): makes a pin an INPUT or OUTPUT. 

// Integer format:        int variableName = number;

// Setup Runs Once
// Loop never stops running
// declare variables that are used in both functions outside of them





int pin = 5;
int frequency = 3000;

void setup() 
{
  pinMode(pin,OUTPUT); // Makes the pin an OUTPUT
}

void loop() 
{
  // Play a note at any frequency and see happens when you change it. P.S only go between 50 and 13000.
  tone(pin,frequency);
}
