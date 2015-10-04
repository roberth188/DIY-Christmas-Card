//Christmas Giftsss

#include "pitches.h"

int tonePin = 0;

int melodyFour[] = {
  NOTE_D3, 
  NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, NOTE_FS3,
  NOTE_E3,NOTE_E3,NOTE_E3,
  NOTE_A3,NOTE_A3,NOTE_B3,NOTE_A3,NOTE_G3,
  NOTE_FS3,NOTE_D3,NOTE_D3,
  NOTE_B3,NOTE_B3,NOTE_C4,NOTE_B3,NOTE_A3,
  NOTE_G3, NOTE_E3, NOTE_D3, NOTE_D3,
  NOTE_E3,NOTE_A3,NOTE_FS3,
  NOTE_G3, NOTE_D3,
  NOTE_G3, NOTE_G3,NOTE_G3,
  NOTE_FS3, NOTE_FS3,
  NOTE_G3, NOTE_FS3, NOTE_E3,  
  NOTE_D3, NOTE_A3,
  NOTE_B3, NOTE_A3, NOTE_G3,
  NOTE_D4,NOTE_D3,NOTE_D3, NOTE_D3,
  NOTE_E3,NOTE_A3,NOTE_FS3,
  NOTE_G3,

};
int noteDurationsFour[] = {
  4,
  4,8,8,8,8,
  4,4,4,
  4,8,8,8,8,
  4,4,4,
  4,8,8,8,8,
  4,4,8,8,
  4,4,4,
  2,4,
  4,4,4,
  2,4,
  4,4,4,
  2,4,
  4,4,4,
  4,4,8,8,
  4,4,4,
  2

};



int melodyOne[] = {
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, 
  NOTE_D4, 0, NOTE_D4, NOTE_D4,  
  NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4,  
  NOTE_E4, 0, NOTE_E4,  
  NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4,  
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,  
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4,  
  NOTE_G4, NOTE_D5,  
  NOTE_B4, NOTE_B4, NOTE_B4,  
  NOTE_B4, NOTE_B4, NOTE_B4, 
  NOTE_B4, NOTE_D5, NOTE_G4, NOTE_A4, 
  NOTE_B4, 0,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_C5, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4,  
  NOTE_D5, NOTE_D5, NOTE_C5, NOTE_A4, 
  NOTE_G4, NOTE_G5};
int noteDurationsOne[] = {
  4,4,4,4,
  2,4,8,8,
  4,4,4,4,
  2,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  2,2,
  4,4,2,
  4,4,2,
  4,4,4,4,
  2,2,
  4,4,4,4,
  4,4,4,8,8,
  4,4,4,4,
  1,4};


int melodyTwo[] = {
  NOTE_A4, NOTE_B4,
  NOTE_C5, NOTE_A4, NOTE_F4, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_F4, NOTE_D4, NOTE_A4, NOTE_G4, 0,
  NOTE_C5, NOTE_A4, NOTE_F4, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_F4, NOTE_D4, NOTE_A4, NOTE_G4, 0,
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, 
  NOTE_A4, 0, NOTE_A4, NOTE_B4,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_B4, NOTE_A4, 
  NOTE_G4, NOTE_G5, NOTE_G3, 
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C5, 
  NOTE_A4, NOTE_G4, 0,
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C5, 
  NOTE_B4, 
  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_B4, 
  NOTE_A4, NOTE_G4, 0,
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, 
  NOTE_G4, NOTE_D5, 
  NOTE_C5};
int noteDurationsTwo[] = {
  8,8,
  6,6,6,6,6,6,
  6,6,6,8,4,8,
  6,6,6,6,6,6,
  6,6,6,8,4,8,
  4,4,4,4,
  2,4,8,8,
  4,4,8,4,8,
  2,4,4,
  8,4,8,4,4,
  4,2,4,
  8,8,8,8,4,4,
  1,
  8,4,8,4,4,
  4,2,4,
  4,4,4,4,
  2,2,
  1};


int melodyThree[] = {
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_G4, NOTE_A4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_G4, NOTE_A4, 0, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_F4,
  NOTE_G4, 0, NOTE_A4, NOTE_AS4, NOTE_G4,
  NOTE_A4, 0, NOTE_AS4, NOTE_C5, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5,
  NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_G4, NOTE_A4, NOTE_F4,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5, NOTE_C5, 0, NOTE_AS4,
  NOTE_A4, NOTE_G4, NOTE_F4};
int noteDurationsThree[] = {
  4,8,8,4,4,
  4,4,4,4,
  8,8,8,8,4,8,8,
  4,4,2,
  4,8,8,4,4,
  4,8,8,4,4,
  8,8,4,8,8,4,
  4,4,2,
  4,8,8,4,4,
  4,4,4,4,
  8,8,8,8,4,8,8,
  4,4,2};





void setup() 
{
  delay(100);



  randomSeed(analogRead(0));

  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);

  pinMode (0, OUTPUT);

  /////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  /*
  for (int thisNote = 0; thisNote < 52; thisNote++) 
  {

    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

    int ledOn = thisNote % 4;

    if (ledOn == 0)
    {
      ledOn = 2;
    }

    ledOn = ledOn - 1;

    if (ledOn == 0)
    {
      ledOn = 3;
    }

    digitalWrite(ledOn, HIGH);

    int noteDuration = 1000/noteDurationsFour[thisNote];
    tone(tonePin, melodyFour[thisNote] * 6,noteDuration);


    int pauseBetweenNotes = noteDuration * 1.08;
    delay(pauseBetweenNotes);

    noTone(tonePin);
    digitalWrite(ledOn, LOW);
  }






  for (int thisNote = 0; thisNote < 55; thisNote++) 
  {

    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

    int ledOn = thisNote % 4;

    if (ledOn == 0)
    {
      ledOn = 2;
    }

    ledOn = ledOn - 1;

    if (ledOn == 0)
    {
      ledOn = 3;
    }

    digitalWrite(ledOn, HIGH);

    int noteDuration = 900/noteDurationsOne[thisNote];
    tone(tonePin, melodyOne[thisNote] * 3,noteDuration);


    int pauseBetweenNotes = noteDuration * 1.08;
    delay(pauseBetweenNotes);

    noTone(tonePin);
    digitalWrite(ledOn, LOW);
  }
  */
  
  

  for (int thisNote = 0; thisNote < 72; thisNote++) 
  {

    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

    int ledOn = thisNote % 4;

    if (ledOn == 0)
    {
      ledOn = 2;
    }

    ledOn = ledOn - 1;

    if (ledOn == 0)
    {
      ledOn = 3;
    }

    digitalWrite(ledOn, HIGH);

    int noteDuration = 900/noteDurationsTwo[thisNote];
    tone(tonePin, melodyTwo[thisNote] * 2,noteDuration);


    int pauseBetweenNotes = noteDuration * 1.12;
    delay(pauseBetweenNotes);

    noTone(tonePin);
    digitalWrite(ledOn, LOW);
  }



/*

  for (int thisNote = 0; thisNote < 57; thisNote++) 
  {

    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);

    int ledOn = thisNote % 4;

    if (ledOn == 0)
    {
      ledOn = 2;
    }

    ledOn = ledOn - 1;

    if (ledOn == 0)
    {
      ledOn = 3;
    }

    digitalWrite(ledOn, HIGH);

    int noteDuration = 800/noteDurationsThree[thisNote];
    tone(tonePin, melodyThree[thisNote] * 2,noteDuration);


    int pauseBetweenNotes = noteDuration * 1.16;
    delay(pauseBetweenNotes);

    noTone(tonePin);
    digitalWrite(ledOn, LOW);
  }

*/




  ///////////////////////////////////////////////////////////////////////////////////

}

void loop() 
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);

  digitalWrite(1, HIGH);
  delay(random(1, 1000));
  digitalWrite(1, LOW);
  delay(random(1, 1000));



}









