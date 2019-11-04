//                Mini Project: A dot
// Create a dot with an x of 20 and a y of 50
//
//                            Things to Rememeber
// display.drawPixel(x,y,color) - makes a dot at point (x,y) with a certain color
// display.display() - makes the changes to the OLED display visible
// display.clearDisplay() - delets everything on the display


//A bunch of files with useful functions are imported
#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

//The size of a display.
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels


// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)

//Makes a display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);

  // Make the actual display and run the Logo
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  //Clear the display, 
  //Create the dot
  //Display the dot  
}

//Loop is not used so everything you see so only runs once
void loop() {
}
