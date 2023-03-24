int buzzer = 0;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    notasMusicais();
    delay(750);
    sirene();
}

void notasMusicais() {
    tone(buzzer, 262, 200); //DO
    delay(200);
    tone(buzzer, 294, 300); //RE
    delay(200);
    tone(buzzer, 330, 300); //MI
    delay(200);
    tone(buzzer, 349, 300); //FA
    delay(300);
    tone(buzzer,392,200); //SOL
    delay(200);
    tone(buzzer,440,200); // LA
    delay(200);
    tone(buzzer,440,200); // SI
    delay(200);
}

void sirene() {
    int tempo = 10, frequencia = 0;

    for (frequencia = 150; frequencia < 1800; frequencia += 1) {
        tone(buzzer, frequencia, tempo);
        delay(1);
    }

    for (frequencia = 1800; frequencia > 150; frequencia -= 1) {
        tone(buzzer, frequencia, tempo);
        delay(1);
    }
}