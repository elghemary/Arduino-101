int buzzerPin = 8; 
int incomingByte = 0; 

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) { 
    incomingByte = Serial.read(); 
    if (incomingByte == '1') {
      tone(buzzerPin, 262);
      delay(1000);
      noTone(buzzerPin);
      delay(1000);

    } else if (incomingByte == '2') {
      tone(buzzerPin, 294);
      delay(1000);
      noTone(buzzerPin);
      delay(1000);

    } else if (incomingByte == '3') {
      tone(buzzerPin, 262);
      delay(1000);
      noTone(buzzerPin);
      delay(1000);

    } else if (incomingByte == '4') {
      tone(buzzerPin, 349);
      delay(1000);
      noTone(buzzerPin);
      delay(1000);

    } else if (incomingByte == '5') {
      tone(buzzerPin, 330);
      delay(1000);
      noTone(buzzerPin);
      delay(1000);
    }
  }
}
