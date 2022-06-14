//www.elegoo.com
//2016.12.08

#include "pitches.h"

//Speaker 1 (Melody)
int melody[] = {
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_E5, NOTE_D5
};
int duration = 100;
int mult[] = {
  7, 1, 4, 6, 6, 6, 6, 6, 6
};

//Speaker 2 (Harmony)
int melodyTwo[] = {
  NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, 
  NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, 
  NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, 
  NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, 
  NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_CS4, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_CS4, NOTE_D4
};
int multTwo[] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 
};
int placeTwo = 0;


void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote <9; thisNote++) {
    tone(8, melody[thisNote], duration*mult[thisNote]);    
    for(int thatNote=0; thatNote < 32; thatNote++){
      tone(9, melodyTwo[thatNote], duration*multTwo[thatNote]);
      delay(duration*multTwo[thatNote]-10);
      placeTwo++;
    }
  delay(duration*mult[thisNote]-10);
  }
  delay(2000);
} 
