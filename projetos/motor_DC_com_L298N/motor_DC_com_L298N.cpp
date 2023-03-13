int velocidade = 0, motorA = 1, motorB = 2, velocidadeRotacao = 0;

void setup() {
    pinMode(velocidade, OUTPUT);
    pinMode(motorA, OUTPUT);
    pinMode(motorB, OUTPUT);

    analogWrite(velocidade, velocidadeRotacao);
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);
}

void loop() {
    velocidadeRotacao = 255;

    analogWrite(velocidade, velocidadeRotacao);

    digitalWrite(motorA, LOW);
    digitalWrite(motorB, HIGH);
    delay(200);

    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);
    delay(200);

    digitalWrite(motorA, HIGH);
    digitalWrite(motorB, LOW);
    delay(200);
}