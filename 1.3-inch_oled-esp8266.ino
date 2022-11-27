#include <Wire.h>
#include "SH1106Wire.h"
SH1106Wire display(0x3c, D2, D1);

void setup() {
  Serial.begin(9600);

  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
  display.setTextAlignment(TEXT_ALIGN_LEFT);

}

void loop() {
  // convert Integer to string for display to show
  
  char str[20];    //create an empty string to store number
  int number = 10210809;
  sprintf(str, "%d", number);  // here value of number is converted to string and saved in str

  display.clear(); // clear display 
  display.drawString(0,0, "Hello World! : ");
  display.drawString(68,0, str); // display int
  display.drawString(100,0, "mm");
  display.display(); // display the strings
}
