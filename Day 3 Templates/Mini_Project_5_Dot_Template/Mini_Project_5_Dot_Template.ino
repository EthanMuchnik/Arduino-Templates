//                       Mini Project: A dot
// Create a dot with an x of 20, a y of 50 and a color of WHITE
//
//                       Things to Rememeber
// display.drawPixel(x,y,BLACK/WHITE) - makes a dot at point (x,y) with a certain color
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
  //Clear the display

  //Create the dot
  
  //Display the dot  
  
}

void loop() {
}
