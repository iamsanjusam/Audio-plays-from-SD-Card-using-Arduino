# Audio-plays-from-SD-Card-using-Arduino

Hi,
It is a simple project to play an audio file in the SD card using Arduino UNO.

For this, audio file must be in .wav format and has sampling rate of 16000Hz and 8bit resolution.

For this experiment following components are needed:
1. Arduino UNO Board
2. Bread board
3. A tiny speaker
4. Micro SD card module for Arduino
5. *A low voltage audio amplifier - LM386
6. *Resistors 1kΩ and 10kΩ.
7. *Capcitors 10µF and 100µF.

*the components are required for amplify the output signal for better results, these components are optional.

The circuit diagaram is provided in the repository. The audio file will play during Arduino startup.

The other functions of library are provided below, for more check out at TMRpcm library wiki: https://github.com/TMRh20/TMRpcm/wiki

TMRpcm music;
music.play("filename");    plays a file
music.play("filename",30); plays a file starting at 30 seconds into the track
music.speakerPin = 11;     set to 5,6,11 or 46 for Mega, 9 for Uno, Nano, etc.
music.disable();           disables the timer on output pin and stops the music
music.stopPlayback();      stops the music, but leaves the timer running
music.isPlaying();         returns 1 if music playing, 0 if not
music.pause();             pauses/unpauses playback
music.quality(1);          Set 1 for 2x oversampling
music.volume(0);           1(up) or 0(down) to control volume
music.setVolume(0);        0 to 7. Set volume level
music.loop(1);             0 or 1. Can be changed during playback for full control of looping. 

Goodluck!
