//                Mini Project: Button Buzzer
// If the button is pressed, make the buzzer buzz
//
//                            Things to Rememeber
// HIGH makes electricity go. LOW makes no electricity go.
// OUTPUT: Make electricity flow. INPUT reads the amount of electricity flowing       
// pinMode(): makes a pin  an INPUT or OUTPUT. Always goes in setup 
// digitialWrite(): Makes a pin HIGH or LOW. Usually goes in loop
// Serial.begin(): Sets up the printing area.
// Serial.println(): Prints thing sto the printing area 
// If the button is pressed 1 is printed. Otherwise 0 is printed.

//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them




int readPin = ; //This is the pin that the electricity information will go to. Put in the correct number.
int buzzerPin = ; //This will give electricity to the buzzer. Put in the correct number.
int buttonPin = ; //This pin is the digitalWrite() pin and will give electricty. Put in the correct number.

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin, );// Put in OUTPUT or INPUT
  pinMode(readPin, ); // Put in OUTPUT or INPUT
}

void loop() {
  
  //Make the Pin HIGH

  //Make a variable that is equal to digitalRead(readPin)
  
  //Print the variable
  
  //Make an if statement. So that if reading == 1, tone(buzzerPin, frequency). Don't forget to use to equal signs
  if(x == 1)
  {
    //Code inside
  }
  //Make an if else statement. So that if reading == 0, noTone. Don't forget to use equal signs
  else if(x == 0)
  {
    //Code Inside
  }
}
