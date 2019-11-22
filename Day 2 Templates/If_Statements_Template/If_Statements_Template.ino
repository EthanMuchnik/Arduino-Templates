//                         If-Statement Template
// A simple if statement

//                            Things to Rememeber
// if(Check something)
//{
//  Do something;
//}
// Serial.begin() Sets up the printing area
// Serial.println(): prints anything you put into it


//Setup Runs Once
//Loop never stops running
//declare variables that are used in both functions outside of them

int age = 0; //You need one equal sign because you are assigning

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(age == 1) //Tests if aNumber is equal to one. There are two equal signs because you are checking, not assigning
  {
    Serial.println("I am 1 year old");//If the statement is correct, do what is inside of the curly brackets
  }

//  else if(aNumber != 1)//If the if statement doesn't run, it runs this. IF this is correct. It would do what's inside of the curly brackets
//  {
//    Serial.println(0);
//  }

  else {
    Serial.println("I am blank year old");
  }
}

//After running the code, try to change the value of aNumber. See what happens.
