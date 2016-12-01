#include <Encoder.h>
#include <Adafruit_NeoPixel.h>


  //INPUTS
  int laserSelect = A0;
  int acToolSelect = A1;
  int dcToolSelect = A2;
  int rotaryA = 2;
  int rotaryB = 3;
  int enter = 15;
  // STATIC OUTPUTS
  int laserRelay = 13;
  int cncRelay = 6;
  // PWM OUTPUTS
  int cncPWM = 5;
  int cncsPWM = 6;
  // LED INDICATORS
  int ledData = 8;
  int ledDataOUT = 9;
  int readyLED = 10;
  // SERIAL DISPLAY
  int serialVOut = 11;
  int serialROut = 12;

  Adafruit_NeoPixel strip = Adafruit_NeoPixel(30, ledData, NEO_GRB + NEO_KHZ800);

void setup() {

  //STARTUP PROCEDURE
  Serial.begin(9600);
  Serial.println("Please wait");
  Serial.println("Loading...");
  //INITIALIZE NEOPIXELS
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  //SETUP ALL THE PINS
  pinMode(laserSelect, INPUT_PULLUP);
  pinMode(acToolSelect, INPUT_PULLUP);
  pinMode(dcToolSelect, INPUT_PULLUP);
  pinMode(rotaryA, INPUT_PULLUP);
  pinMode(rotaryB, INPUT_PULLUP);
  pinMode(enter, INPUT_PULLUP);
  pinMode(laserRelay, OUTPUT);
  pinMode(cncRelay, OUTPUT);
  pinMode(cncPWM, OUTPUT);
  pinMode(cncsPWM, OUTPUT);
  
  Serial.println("Time to make!");
  Serial.println("Ready for select...");
  fadeToWhite();

}

void loop() {
  //Wait for button press

 if(laserSelect == LOW){
  fadeToBlue();
  laser();
 }
 if(acToolSelect == LOW){
  fadeToYellow();
  acTool();
 }
 if(dcToolSelect == LOW){
  fadeToGreen();
  dcTool();
 }

}

void laser(){
  Serial.println("Starting laser");
  Serial.println("mode...");

}

void acTool(){
  Serial.println(">Auto Spindle");
  Serial.println(" Manual Spindle");
  Serial.println(" Cancel");

}

void dcTool(){
  Serial.println(">PWM Spindle");
  Serial.println(" Manual Spindle");
  Serial.println(" sPWM Spindle");
  Serial.println(" Cancel");

}

void fadeToGreen(){
  
}

void fadeToBlue(){
  
}

void fadeToYellow(){
  
}

void fadeToWhite(){
  
}

