byte mat_num[10][7] = {
    { 1,1,1,1,1,1,0 }, // Digito 0
    { 0,1,1,0,0,0,0 }, // Digito 1
    { 1,1,0,1,1,0,1 }, // Digito 2
    { 1,1,1,1,0,0,1 }, // Digito 3
    { 0,1,1,0,0,1,1 }, // Digito 4
    { 1,0,1,1,0,1,1 }, // Digito 5
    { 1,0,1,1,1,1,1 }, // Digito 6
    { 1,1,1,0,0,0,0 }, // Digito 7
    { 1,1,1,1,1,1,1 }, // Digito 8
    { 1,1,1,0,0,1,1 }, // Digito 9
};

byte alfabeto[26][7] = {
    { 1,1,1,0,1,1,1 }, // A
    { 1,1,1,1,1,1,1 }, // B
    { 1,0,0,1,1,1,0 }, // C
    { 1,1,1,1,1,1,0 }, // D
    { 1,0,0,1,1,1,1 }, // E
    { 1,0,0,0,1,1,1 }, // F
    { 1,0,1,1,1,1,0 }, // G
    { 0,1,1,0,1,1,1 }, // H
    { 0,0,0,0,1,1,0 }, // I
    { 0,1,1,1,1,0,0 }, // J
    { 0,0,0,0,0,0,0 }, // K
    { 0,0,0,1,1,1,0 }, // L
    { 0,0,0,0,0,0,0 }, // M
    { 0,0,0,0,0,0,0 }, // N
    { 1,1,1,1,1,1,0 }, // O
    { 1,1,0,0,1,1,1 }, // P
    { 0,0,0,0,0,0,0 }, // Q
    { 1,1,1,0,0,1,1 }, // R
    { 1,0,1,1,0,1,1 }, // S
    { 0,0,0,0,0,0,0 }, // T
    { 0,1,1,1,1,1,0 }, // U
    { 0,0,0,0,0,0,0 }, // V
    { 0,0,0,0,0,0,0 }, // W
    { 0,1,1,0,1,1,0 }, // X
    { 0,1,1,1,1,1,0 }, // Y
    { 0,0,0,0,0,0,0 }  // Z
};


void setup() {
    pinMode(2, OUTPUT); // PINO 2 -> segmento A
    pinMode(3, OUTPUT); // PINO 3 -> segmento B
    pinMode(4, OUTPUT); // PINO 4 -> segmento C
    pinMode(5, OUTPUT); // PINO 5 -> segmento D
    pinMode(6, OUTPUT); // PINO 6 -> segmento E
    pinMode(7, OUTPUT); // PINO 7 -> segmento F
    pinMode(8, OUTPUT); // PINO 8 -> segmento G
    pinMode(9, OUTPUT); // PINO 9 -> segmento PONTO
}

void loop() {
    exibicaoNumeros();
    exibicaoLetras();
}

void exibicaoNumeros() {
    for(int numero = 0; numero <= 9; numero++){
        exibicaoNumero(numero);
    }
}

void exibicaoLetras() {
    for(int numeroLetra = 0; numeroLetra <= 26; numeroLetra++){
        exibicaoLetra(numeroLetra);
    }
}

void exibicaoNumero(int numero) {
    int pino = 2;

    for (byte segmentos = 0; segmentos < 7; ++segmentos){
        digitalWrite(pino, mat_num[numero][segmentos]);
        ++pino;
    }

    delay(750);
}

void exibicaoLetra(int numeroLetra) {
    int pino = 2;

    for (byte segmentos = 0; segmentos < 7; ++segmentos){
        digitalWrite(pino, alfabeto[numeroLetra][segmentos]);
        ++pino;
    }

    delay(750);
}
