//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
//Speaker 1 (Melody)
int melody[] = {
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_GS5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_GS5, NOTE_C6, NOTE_C6, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_DS5, NOTE_DS5, NOTE_D5, 
  NOTE_C6, NOTE_C6, NOTE_GS5, NOTE_AS5, NOTE_AS5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_GS5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_GS5, NOTE_C6, NOTE_G5, NOTE_G5, NOTE_C6, NOTE_C6, NOTE_GS5, NOTE_GS5, NOTE_AS5, NOTE_AS5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_GS5, NOTE_F5, NOTE_DS5, NOTE_D5, NOTE_C5};
int duration = 500;
int mult[] = {
  2, 1, 1, 2, 2, 2, 2, 3, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 3, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 8, 
  4, 3, 1, 1, 1, 2, 3, 1, 2, 2, 1, 1, 2, 2, 2, 4, 4, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 8
};

//Speaker 2 (Bass Clef)
int melodyTwo[] = {
  NOTE_G3, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E3, NOTE_B4, NOTE_A4, NOTE_E3
}
int multTwo[] = {
  4, 8, 8, 8, 8, 8, 8, 8, 8
}

void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote <34; thisNote++) {
    tone(8, melody[thisNote], duration*mult[thisNote]);
    tone(9, melodyTwo[thisNote], duration*mult[thisNote]); 
    delay(duration*mult[thisNote]-10);
  } 
  delay(2000);
}
