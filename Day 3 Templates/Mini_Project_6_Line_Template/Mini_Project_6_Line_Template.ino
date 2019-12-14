//                            Mini Project: A Line
// Create a line which starts at x = 20 an y = 30. It ends with x = 40 and y = 50. The line should be white.
//
//                            Things to Rememeber
// display.drawLine(x1,y1,x2,y2,BLACK/WHITE) - makes a line starting at point (x1,y1) and ending at point (x2,y2). It has a specified color
// display.display() - makes the changes to the OLED display visible
// display.clearDisplay() - delets everything on the display
// delay(milliseconds): Countinues the current action for a certain amount of milliseconds      ||     1000 milliseconds = 1 second


#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

#define OLED_RESET     4 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  //Clear the display
   
  //Create the line
  
  //Display the line  
  
}

void loop() {
}
