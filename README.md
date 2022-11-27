# 1.3-inch_oled-esp8266
This repository will help you integrate 1.3 inch OLED to your project (using esp8266)
* When i wanted to integrate 1.3" oled to my project i was facing so many difficulty..... so i created this repository
here i will help/guide you on how you can integrate oled to your project on ESP-8266

Steps for setup :-
1) Download zip of this project (click big green button on top right side)
2) Inside you will find 2 folder 12c scanner for checking if display is connected or not ( in case it's not showing any character)
3) and 1.3-inch_oled-esp8266 folder where the code is for esp8266
4) Open .ino file in arduino IDE, make sure esp8266 board is installed, if not instructions are here https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/
5) Make connections according to image below
<img src="https://user-images.githubusercontent.com/70732168/204129295-140276ae-eca1-4e38-88c7-610a9a95147b.jpg" width="250" height="250">

6) Install OLED library from ThingsPulse https://github.com/ThingPulse/esp8266-oled-ssd1306
7) You can now compile and flash the code!!!
8) obviously make changes as you needed.....


Currently this repository will help you with :-

* Seting up OLED connections
* Displaying string onto display
* Displaying numbers (integers and float values) on to display
* Changing size and font of display
*....... more help will come soon...

**Open to contributions : Help make OLED intergration on ESP-8266 beginner friendly**

** Using I2C scanner : 
* You will most probabily won't need it, but in case you are sure all connections are correct still you are not getting expected output you can load the I2C code inside arduino IDE and flash it directly. then open serial monitor and see if it shows device found message like shown in image below.      
![Screenshot from 2022-11-27 15-05-12](https://user-images.githubusercontent.com/70732168/204130096-2eb45432-8e8a-4a3d-bffa-b3892f977545.png)

* if nothing is showing on serial monitor check if baud rate is correct on top right side of serial monitor (should be 9600 for this code)
* you can also press RST button on ESP-8266 (optional)
