#include "SD.h" //library to read SD card
#include "TMRpcm.h" //library to play auido
#include "SPI.h" //SPI library for SD card

#define SD_ChipSelectPin 10 //Chip select pin(CS pin in SD card module) set as pin 10
TMRpcm music; //Library object is named "music"

void setup()
{
 Serial.begin(9600);
 music.speakerPin = 9; //Auido out on pin 9
 
 //Serial Com for debugging 
 if (!SD.begin(SD_ChipSelectPin)) 
    {
      Serial.println("SD fail");
      return;
    }

music.setVolume(5);//0 to 7 can be set asvolume level
music.quality(1);//  Set 1 for 2x oversampling Set 0 for normal 
music.play("testsd.wav");// plays the .wav file in the SD card on Arduino startup
}

void loop()
{ 
 
}
