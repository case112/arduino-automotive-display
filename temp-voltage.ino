#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 display(-1);

void setup() {                
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
  display.clearDisplay();
}

void loop() {
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(5,0);
  display.print((char)247); // degree symbol 
  display.print("C ");
  display.println(79 + random(-4,4));
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(6,25);
  display.println("COOLANT TEMPERATURE"); 
  display.display();
  delay(10000);
  display.clearDisplay();

  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(5,0); 
  display.print("V ");
  display.println((12.9 + (random(-4, 4)) / 10.0), 1);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(18,25);
  display.println("SYSTEM VOLTAGE"); 
  display.display();
  delay(10000);
  display.clearDisplay();
  }