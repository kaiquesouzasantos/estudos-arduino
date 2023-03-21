int pos = 0, btn1 = A0, btn2 = A1, btn3 = A2, buzzer = 8;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if (digitalRead(btn1) == HIGH) {
    // tone(<buzzer>, Hz, <tempoMs>)
    tone(buzzer, 440, 100); // play tone 57 (A4 = 440 Hz)
  }
  if (digitalRead(btn2) == HIGH) {
    tone(buzzer, 494, 100); // play tone 59 (B4 = 494 Hz)
  }
  if (digitalRead(btn3) == HIGH) {
    tone(buzzer, 523, 100); // play tone 60 (C5 = 523 Hz)
  }
  delay(10);
}