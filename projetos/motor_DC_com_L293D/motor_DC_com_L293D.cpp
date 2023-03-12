int velocidade = 0, motorA = 1, motorB = 2, velocidadeRotacao = 255;

void setup(){
    pinMode(velocidade, OUTPUT);
    pinMode(motorA, OUTPUT);
    pinMode(motorB, OUTPUT);

    analogWrite(velocidade, 0);
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);
}

void loop(){
    analogWrite(velocidade, velocidadeRotacao);
    digitalWrite(motorA, HIGH);
    digitalWrite(motorB, LOW);

    delay(5000);

    analogWrite(velocidade, 0);
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);

    delay(5000);

    analogWrite(velocidade, velocidadeRotacao);
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, HIGH);
}