//             Mini Project: A Line of Dots
//  make dots so each dot is 10 pixels to the right and 10 dots of the previous. The first do should be at x=5 and y=5

//                            Things to Rememeber
// display.drawPixel(x,y,color) - Creates a dot at the point x and y with a certain color.
// display.drawLine(x1,y1,x2,y2,color) - makes a line starting at point (x1,y1) and ending at point (x2,y2). It has a specified color
// display.display() - makes the changes to the OLED display visible
// display.clearDisplay() - delets everything on the display


#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

#define OLED_RESET     4 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//create the first x and y points. Make them ints
int x =  ;
int y =  ;

void setup() {
  Serial.begin(9600);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  //Clear the display, 
  
}

void loop() {
  // Show a dot and display it
  
  //  This is how you add a number to a variable
  x = x + 10;
  y = y + 10;
}
