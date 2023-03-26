int inclinacao = 4, buzzer = 3;

void setup() {
    pinMode(inclinacao, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    if(digitalRead(inclinacao) == 0) {
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }
}