int forca = A0, buzzer = 3;

void setup() {
    pinMode(forca, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    if(analogRead(forca) >= 150) {
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }
}