int verde = 0, amarelo = 1, vermelho = 2, potenciometro = A0, buzzer = 3;

void setup() {
    pinMode(verde, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(vermelho, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(potenciometro, INPUT);
}

void loop() {
    int potencia = analogRead(potenciometro);

    if (potencia <= 500) {
        digitalWrite(verde, HIGH);
        digitalWrite(amarelo, LOW);
        digitalWrite(vermelho, LOW);
    } else if (potencia > 500 and potencia <= 900) {
        digitalWrite(verde, LOW);
        digitalWrite(amarelo, HIGH);
        digitalWrite(vermelho, LOW);
    } else {
        digitalWrite(verde, HIGH);
        digitalWrite(amarelo, HIGH);
        digitalWrite(vermelho, HIGH);
    }

    digitalWrite(buzzer, potencia);
}