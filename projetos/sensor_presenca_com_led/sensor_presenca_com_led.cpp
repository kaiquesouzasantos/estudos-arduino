int presenca = 2, led = 3;

void setup() {
    pinMode(presenca, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    if(digitalRead(presenca) == 1){
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, HIGH);
    }
}