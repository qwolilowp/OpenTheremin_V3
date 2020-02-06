## Open.Theremin V3 control software 

Arduino UNO Software for the Open.Theremin

### Don't click on the files!
Click on the "Download ZIP" Button to the right or [Click here](https://github.com/GaudiLabs/OpenTheremin_V3/archive/master.zip) 
Then unpack the archive.

### Open Source Theremin based on the Arduino Platform

Open.Theremin is an arduino shield to build the legendary music instrument invented by Leon Theremin back in 1920. The theremin is played with two antennas, one to control the pitch and one for volume. The electronic shield with two ports to connect those antennas comprises two heterodyne oscillators to measure the distance of the hand to the antenna when playing the instrument. The resulting signal is fed into the arduino. After linearization and filtering the arduino generates the instruments sound that is then played through a high quality digital analog audio converter on the board. The characteristics of the sound can be determined by a wave table on the arduino.

For more info on the open source project and on availability of ready made shield see:

http://www.gaudi.ch/OpenTheremin/

### Installation
1. Open up the Arduino IDE
2. Open the File "Open_Theremin_V3.ino"
3. Selecting the correct usb port on Tools -> Serial Port
4. Select the correct arduino board from Tools -> Board
5. Upload the code by clicking on the upload button.

### LICENSE
Written by Urs Gaudenz, GaudiLabs, 2016
GNU license, check LICENSE file for more information
All text above must be included in any redistribution

# Wavetable Editor

I added a litte tool to draw a wave and export it to c-file wavetable. Include the "thermein_sinetabelX.c" to the arduino project. Add the *include* statement to the "ihandler.cpp", add the variable name of the table to the *wavetables* of "ihandler.cpp". Nice. If you add a lot of tables, adjust the right bitshift to the *wavePotValueL* variable that gives the *vWavetableSelector* value in the "application.cpp" (line 181). Its now set to 6. A smaller value will increase the possible palces for wavetables (see *select* statement in "ihandlers.cpp" line 148).

https://www.z-tennot-iu.de/d2w/

(v.01)

Todo: 
1. better Interpolation

