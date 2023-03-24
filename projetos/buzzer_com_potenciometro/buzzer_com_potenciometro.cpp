int potenciometro = A0, buzzer = 2;

void setup() {
    pinMode(potenciometro, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    tone(buzzer, analogRead(potenciometro));
}