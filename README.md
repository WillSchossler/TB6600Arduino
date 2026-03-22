# A simple project to use arduino to control a stepper motor using the TB6600 driver
Look at "main.cpp" at "src" directory for the code used for this project. I've used the "delay" function but if you need, you can use "millis" to create a non blocking coroutine. 
```
I've used PlatformIO with VSCcode to build and upload, but feel free to use any other solution like ArduinoIDE.
```

### You can use "Proteus" software for simulation (TB6600.pdsprj), if you do, just make sure to build your ".hex" and set it's path on the arduino.
```
The .hex made with PlatformIO is located at ".pio\build\uno.firmware.hex".
```
If you do not have Proteus, you can use the "TB6600.bmp" image for a wiring diagram. 


In this project i've used an old computer power supply to power both the driver (yellow 12V wires) and the arduino (5v red wire). Just beware to power arduino on 5V pin!
## Feel free to contact me if you have any doubts!
