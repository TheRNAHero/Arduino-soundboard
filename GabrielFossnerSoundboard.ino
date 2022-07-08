#include "notes.h"
#include <LiquidCrystal_I2C.h>
#define joyX A1
#define joyY A0
const int buzzer = 9;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void note(int x, int y) {
  tone(buzzer, x);
  delay(y);
  noTone(buzzer);
}
void setup() {
  // put your setup code here, to run once:
  lcd.init(); //initialize the lcd
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Move joystick");
  lcd.setCursor(0, 1);
  lcd.print("to pick a song");
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void megalovania() {
  int notes[] = {2349, 0, 2349, 4699, 0, 3729, 3520, 2794, 2349, 2794, 3136, 2093, 0, 2093, 4699, 0, 3729, 3520, 2794, 2349, 2794, 3136, 1976, 0, 1976, 4699, 0, 3729, 3520, 2794, 2349, 2794, 3136, 1865, 0, 1865, 4699, 0, 3729, 3520, 2794, 2349, 2794, 3136, 2349};
  int waits[] = {125, 30, 125, 250, 30, 500, 250, 250, 500, 125, 125, 125, 30, 125, 250, 30, 500, 250, 250, 500, 125, 125, 125, 30, 125, 250, 30, 500, 250, 250, 500, 125, 125, 125, 30, 125, 250, 30, 500, 250, 250, 500, 125, 125, 500};
  int i = 0;
  for (i = 0; i < 45; i++) {
    note(notes[i], waits[i]);
  };
}

void neverGonnaGiveYouUp(){
  int notees[] = {
  NOTE_AS6, NOTE_AS6, NOTE_GS6, NOTE_GS6,
  NOTE_F7, NOTE_F7, NOTE_DS7, NOTE_AS6, NOTE_AS6, NOTE_GS6, NOTE_GS6, NOTE_DS7, NOTE_DS7, NOTE_CS7, NOTE_C7, NOTE_AS6,
  NOTE_CS7, NOTE_CS7, NOTE_CS7, NOTE_CS7,
  NOTE_CS7, NOTE_DS7, NOTE_C7, NOTE_AS6, NOTE_GS6, NOTE_GS6, NOTE_GS6, NOTE_DS7, NOTE_CS7,
  NOTE_AS6, NOTE_AS6, NOTE_GS6, NOTE_GS6,
  NOTE_F7, NOTE_F7, NOTE_DS7, NOTE_AS6, NOTE_AS6, NOTE_GS6, NOTE_GS6, NOTE_GS7, NOTE_C7, NOTE_CS7, NOTE_C7, NOTE_AS6,
  NOTE_CS7, NOTE_CS7, NOTE_CS7, NOTE_CS7,
  NOTE_CS7, NOTE_DS7, NOTE_C7, NOTE_AS6, NOTE_GS6, 0, NOTE_GS6, NOTE_DS7, NOTE_CS7, 0
  };
  int waitss[]={1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8,
  1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8, 4};
  int i=0;
  for (i = 0; i <59; i++) {
    note(notees[i], waitss[i]*100);
    delay(waitss[i]*100*.3);
  };
}
void harrypottah(){
  int notes[]={
    NOTE_B6,
    NOTE_E7,
    NOTE_G7,
    NOTE_FS7,
    NOTE_E7,
    NOTE_B7,
    NOTE_A7,
    NOTE_FS7,
    NOTE_E7,
    NOTE_G7,
    NOTE_FS7,
    NOTE_DS7,
    NOTE_FS7,
    NOTE_B6,
    0,
    NOTE_B6,
    NOTE_E7,
    NOTE_G7,
    NOTE_FS7,
    NOTE_E7,
    0,
    NOTE_B7,
    NOTE_D8,
    NOTE_CS8,
    NOTE_C8,
    NOTE_A7,
    NOTE_C8,
    NOTE_B7,
    NOTE_AS7,
    NOTE_AS6,
    NOTE_G7,
    NOTE_E7
  };
  int waits[]={
    250,
    400,
    125,
    250,
    400,
    250,
    500,
    500,
    400,
    125,
    250,
    400,
    250,
    1000,
    250,
    250, //starting of final part
    400,
    125,
    250,
    400,
    125,
    250,
    400,
    250,
    250,
    250,
    400,
    125,
    250,
    400,
    250,
    1000
  };
  for(int i=0; i<32; i++){
    note(notes[i], waits[i]);
    delay(waits[i]*.3);
  };
}
void smellsLikeTeenSpirit(){
  int notes[]={
    NOTE_GS7,
    NOTE_G7,
    NOTE_G7,
    NOTE_F7,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_C8,
    NOTE_CS7,
    NOTE_CS7,
    NOTE_CS7,
    NOTE_C7,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_C8, 
    NOTE_GS7,
    NOTE_G7,
    NOTE_G7,
    NOTE_F7,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_C8, 
    NOTE_GS7,
    NOTE_G7,
    NOTE_G7,
    NOTE_F7,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_C8, 
    NOTE_CS7,
    NOTE_CS7,
    NOTE_CS7,
    NOTE_C7, 
    NOTE_CS8,
    NOTE_CS8,
    NOTE_CS8,
    NOTE_C8, 
  };
  int waits[]={
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
    250,
    175,
    250,
    500,
  };
    for(int i=0; i<40; i++){
    note(notes[i], waits[i]);
    delay(waits[i]*.3);
  };
}
void loop() {
  // put your main code here, to run repeatedly:
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);

  //print the values with to plot or view
  Serial.print(xValue);
  Serial.print("\t");
  Serial.println(yValue);
  if (xValue > 700) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Megalovania");
    lcd.setCursor(0, 1);
    lcd.print("Tobey Fox");
    megalovania();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Move joystick");
    lcd.setCursor(0, 1);
    lcd.print("to pick a song");
  } else if(xValue<300) {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("RickRoll");
    lcd.setCursor(0, 1);
    lcd.print("Rick Astley");
    neverGonnaGiveYouUp();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Move joystick");
    lcd.setCursor(0, 1);
    lcd.print("to pick a song");
  }else if(yValue<300){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Hedwig's Theme");
    lcd.setCursor(0, 1);
    lcd.print("John Williams"); 
    harrypottah();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Move joystick");
    lcd.setCursor(0, 1);
    lcd.print("to pick a song");
  }else if(yValue>700){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Smells Like Teen");
    lcd.setCursor(0, 1);
    lcd.print("Spirit-Nirvana");
    smellsLikeTeenSpirit();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Move joystick");
    lcd.setCursor(0, 1);
    lcd.print("to pick a song");
  }
}
