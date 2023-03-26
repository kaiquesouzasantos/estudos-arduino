int gas = A0, buzzer = 3;

void setup() {
    pinMode(gas, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    if(analogRead(gas) >= 150) {
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }
}