//                         If-Statement Template
// This is a simple if statement template.

// 1. After running the code change the value of age. See if you get the same result.
// Try to understand why your getting certain results.




//                            Things to Rememeber:

// if(Check something)
// {
//   Do something;
// }

// Int format:            int variableName = number;
// String format:         String variableName = “word”;

// Serial.begin(9600): Sets up the printing area
// Serial.println(): prints anything you put into it

// Setup Runs Once
// Loop never stops running
// declare variables that are used in both functions outside of them




int age = 1;

void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  if(age == 1) //Tests if age is equal to one. There are two equal signs because you are checking, not assigning.
  {
    Serial.println("I am 1 year old");//If the statement is true, do what is inside of the curly brackets.
  }
}
