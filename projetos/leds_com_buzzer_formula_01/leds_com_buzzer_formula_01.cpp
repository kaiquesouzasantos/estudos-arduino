int verde = 2, amarelo = 4, vermelho = 3, buzzer = 5;

void setup() {
    pinMode(verde, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(vermelho, OUTPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    ativaComponente(verde);
    ativaComponente(amarelo);
    ativaComponente(vermelho);

    ativaComponente(buzzer);
}

void ativaComponente(int portaLed) {
    digitalWrite(portaLed, HIGH);
    delay(750);
}