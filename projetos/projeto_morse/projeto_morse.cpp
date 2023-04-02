const int LED = 3, BUZZER = 4;

String codigo[] = {
    ".-",   // A
    "-...", // B
    "-.-.", // C
    "-..",  // D
    ".",    // E
    "..-.", // F
    "--.",  // G
    "....", // H
    "..",   // I
    ".---", // J
    "-.-",  // K
    ".-..", // L
    "--",   // M
    ".-",   // N
    "---",  // O
    ".--.", // P
    "--.-", // Q
    ".-.",  // R
    "...",  // S
    "-",    // T
    "..-",  // U
    "...-", // V
    ".--",  // W
    "-..-", // X
    "-.--", // Y
    "--.."  // Z                                                                   
};

String mensagem = "JUNIOR E THAY";

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);

    codificaStringParaMorse(mensagem);
}

void loop() {}

void codificaStringParaMorse(String mens) {
    int posicao_codigo;
    for (int i = 0; i < mens.length(); i++) {
        posicao_codigo = ((int) mens[i]) - 65; // -> Transforma cada string em seu correspondente na tabela ascii
        analisaCaractereMorse(codigo[posicao_codigo]);
        delay(500);
    }
}

void analisaCaractereMorse(String caractere) {
    for (int i = 0; i < caractere.length(); i++) {
        if (caractere[i] == '.') {
            codificaSinalCurto();
        } else if (caractere[i] == '-') {
            codificaSinalLongo();
        }
    }
}

void codificaSinalCurto() {
    codificaSinal(75);
}

void codificaSinalLongo() {
    codificaSinal(200);
}

void codificaSinal(int tempo) {
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(tempo);
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
    delay(tempo);
}