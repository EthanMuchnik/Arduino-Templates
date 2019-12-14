//                            Mini Project: Text
//  Look at how text was made. Now make White text at point x = 10 and y = 40, with a size of 1. The text should say "Hello OLED display". 

//                            Things to Rememeber
// display.println(Words) - puts any text into the display in between the parenthesis. 
// display.setTextSize(Number)- It makes the the text bigger or smaller. From 1-10 are the only practical sizes
// display.setTextColor(BLACK/WHITE) - It makes the text a certain color based on what is inside of the parenthesis. 
// display.setCursor(x,y) - Specified the left top point where the text will start. 
// display.display() - makes the changes to the OLED display visible
// display.clearDisplay() - delets everything on the display
// delay(milliseconds): Countinues the current action for a certain amount of milliseconds      ||     1000 milliseconds = 1 second

#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

//The size of a display.
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

#define OLED_RESET     4 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.println("Word");
  display.display();

// Write your new text here

}

void loop() {
}
