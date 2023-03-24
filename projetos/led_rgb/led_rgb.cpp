int vermelho = 3, azul = 4, verde = 5;

void setup() {
    pinMode(vermelho, OUTPUT);
    pinMode(azul, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop() {
    ativaComponente(vermelho);
    delay(750);
    desativaComponente(vermelho);

    ativaComponente(azul);
    delay(750);
    desativaComponente(azul);

    ativaComponente(verde);
    delay(750);

    ativaComponentes(vermelho, azul);
    ativaComponentes(vermelho, verde);
    ativaComponentes(azul, verde);
}

void ativaComponente(int porta) {
    digitalWrite(porta, HIGH);
}

void desativaComponente(int porta) {
    digitalWrite(porta, LOW);
}

void ativaComponentes(int porta1, int porta2){
    ativaComponente(porta1);
    ativaComponente(porta2);
    delay(750);
    desativaComponentes(porta1, porta2);
}

void desativaComponentes(int porta1, int porta2){
    desativaComponente(porta1);
    desativaComponente(porta2);
}