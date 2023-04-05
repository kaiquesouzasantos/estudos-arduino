const int botaoVerde = 4, botaoAmarelo = 6, botaoReseta = 5, ledVerde = 2, ledAmarelo = 3;
int valorVerde = 0, valorAmarelo = 0, valorReseta = 0, trava = 0;

void setup() {
	pinMode(botaoVerde, INPUT);
    pinMode(botaoAmarelo, INPUT);
    pinMode(botaoReseta, INPUT);

    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
}

void loop() {
    valorVerde = digitalRead(botaoVerde);
    valorAmarelo = digitalRead(botaoAmarelo);
    valorReseta = digitalRead(botaoReseta);

    if((valorVerde == 1) && (trava == 0)) {
        digitalWrite(ledVerde, HIGH);
        trava = 1;
    }

    if((valorAmarelo == 1) && (trava == 0)) {
        digitalWrite(ledAmarelo, HIGH);
        trava = 1;
    }

    if(valorReseta == 1) {
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        trava = 0;
    }
}