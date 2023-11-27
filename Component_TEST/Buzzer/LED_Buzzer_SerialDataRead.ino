int buzzerPin = 8; 
int incomingByte = 0;
int LED = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);

void loop() {
  if (Serial.available() > 0) { 
    incomingByte = Serial.read(); 

    if (incomingByte == '1') {
      digitalWrite(buzzerPin, HIGH); 
      digitalWrite(LED, HIGH);

    } else if (incomingByte == '0') {
      digitalWrite(buzzerPin, LOW); 
      digitalWrite(LED, LOW);

    } else if (incomingByte == '2') {
      digitalWrite(buzzerPin, LOW); 
      digitalWrite(LED, HIGH);

    } else if (incomingByte == '3') {
      digitalWrite(buzzerPin, HIGH);
      digitalWrite(LED, LOW);
    }
  }
}
