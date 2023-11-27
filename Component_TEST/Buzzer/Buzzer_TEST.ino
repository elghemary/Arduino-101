int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  tone(buzzer, 1000); // test using differnet frequencies 400/500 etc...
  delay(1000);
  noTone(buzzer);
  delay(1000); 
}
