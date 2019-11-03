//                         Serial Template
// Standard Serial printing template

//                            Things to Rememeber
// Serial.println(): prints anything you put into it


//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(1);
// In order to see what you just printed press (Ctrl+Shift+M)
// If you see nothing there make the middle square say 9600 baud
}


//Now try putting different things into Serial.println(). For example, different numbers or variables.
