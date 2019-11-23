//                            Serial Template
// Standard Serial printing template. 

//Try putting different numbers or variables inside. You can also put in words if they are "surrounded by quotaion marks".

//                            Things to Rememeber
// Serial.begin(): Sets up the printing area
// Serial.println(): prints anything you put inside of the parenthesis


//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(1);
// In order to see what you just printed press (Ctrl+Shift+M)
// If you see nothing there, make the middle rectangle say 9600 baud
}
