int motor = 0, potenciometro = A0, temporizador = 10, valorPotenciometro = 0;

void setup() {
    pinMode(motor, OUTPUT);
    pinMode(potenciometro, INPUT);
}

void loop() {
    valorPotenciometro = map(
        analogRead(potenciometro) , 0, 1023, 0, 255
    );

    analogWrite(motor, valorPotenciometro);
    delay(temporizador);
}