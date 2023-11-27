int buzzer = 8;

int melody[] = {
  262, 262, 294, 262, 349, 330, 0,   // "Happy Birthday to You"
  262, 262, 294, 262, 392, 349, 0,   // "Happy Birthday to You"
  262, 262, 523, 440, 349, 330, 294, // "Happy Birthday dear [Name]"
  466, 466, 440, 349, 392, 349       // "Happy Birthday to You"
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4,
  4, 8, 8, 4, 4, 4, 4,
  4, 8, 8, 4, 4, 4, 8,
  4, 8, 8, 4, 4, 4, 4
};

void setup() {
  for (int thisNote = 0; thisNote < 28; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzer, melody[thisNote], noteDuration);
    
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(buzzer);
  }
}

void loop() {
}
