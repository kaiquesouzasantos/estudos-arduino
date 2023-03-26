int verde = 0, amarelo = 1, vermelho = 2, buzzer = 3, estagio = 0;

byte contagem[4][7] = {
    { 1,1,1,1,1,1,0 }, // Digito 0
    { 0,1,1,0,0,0,0 }, // Digito 1
    { 1,1,0,1,1,0,1 }, // Digito 2
    { 1,1,1,1,0,0,1 }, // Digito 3
};

void setup() {
    pinMode(6, OUTPUT); // segmento A
    pinMode(7, OUTPUT); // segmento B
    pinMode(8, OUTPUT); // segmento C
    pinMode(9, OUTPUT); // segmento D
    pinMode(10, OUTPUT); // segmento E
    pinMode(11, OUTPUT); // segmento F
    pinMode(12, OUTPUT); // segmento G
    pinMode(13, OUTPUT); // segmento PONTO

    pinMode(verde, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(vermelho, OUTPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    run();
    delay(100);
}

void run() {
    for(int numero = 3; numero >= 0; numero--){
        exibicaoNumero(numero);
        gerenciaSinalizacao();
        delay(1000);
      	estagio++;
    }

    resetComponentes();
}

void gerenciaSinalizacao() {
    if(estagio == 0) {
        gerenciaComponentes(LOW, LOW, HIGH, LOW);
    } else if(estagio == 1) {
        gerenciaComponentes(LOW, HIGH, HIGH, LOW);
    } else if(estagio == 2) {
        gerenciaComponentes(HIGH, HIGH, HIGH, LOW);
    } else if(estagio == 3) {
        gerenciaComponentes(LOW, LOW, LOW, LOW);
      	delay(60);
      	gerenciaComponentes(HIGH, HIGH, HIGH, HIGH);
    } else {
        gerenciaComponentes(LOW, LOW, LOW, LOW);
    }
}

void exibicaoNumero(int numero) {
    int pino = 6;

    for(byte segmentos = 0; segmentos < 7; ++segmentos){
        digitalWrite(pino, contagem[numero][segmentos]);
        ++pino;
    }
}

void gerenciaComponentes(int estadoVerde, int estadoAmarelo, int estadoVermelho, int estadoBuzzer) {
    digitalWrite(verde, estadoVerde);
    digitalWrite(amarelo, estadoAmarelo);
    digitalWrite(vermelho, estadoVermelho);
    digitalWrite(buzzer, estadoBuzzer);
}

void resetComponentes(){
    estagio = 0;
    gerenciaComponentes(LOW, LOW, LOW, LOW);
}