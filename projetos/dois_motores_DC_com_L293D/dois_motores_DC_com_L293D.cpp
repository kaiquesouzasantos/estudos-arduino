int velocidade1 = 0, velocidade2 = 9, velocidadeRotacao = 255;
int motor1_a = 1, motor1_b = 2, motor2_a = 8, motor2_b = 10;

void setup(){
    // MOTOR 1
    pinMode(velocidade1, OUTPUT);
    pinMode(motor1_a, OUTPUT);
    pinMode(motor1_b, OUTPUT);

    analogWrite(velocidade1, 0);
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, LOW);

    // MOTOR 2
    pinMode(velocidade2, OUTPUT);
    pinMode(motor2_a, OUTPUT);
    pinMode(motor2_b, OUTPUT);    

    analogWrite(velocidade2, 0);
    digitalWrite(motor2_a, LOW);
    digitalWrite(motor2_b, LOW);
}

void loop(){
    analogWrite(velocidade1, velocidadeRotacao);
    digitalWrite(motor1_a, HIGH);
    digitalWrite(motor1_b, LOW);

    analogWrite(velocidade2, velocidadeRotacao);
    digitalWrite(motor2_a, LOW);
    digitalWrite(motor2_b, HIGH);

    delay(5000);

    analogWrite(velocidade1, 0);
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, LOW);

    analogWrite(velocidade2, 0);
    digitalWrite(motor2_a, LOW);
    digitalWrite(motor2_b, LOW);

    delay(5000);

    analogWrite(velocidade1, velocidadeRotacao);
    digitalWrite(motor1_a, LOW);
    digitalWrite(motor1_b, HIGH);

    analogWrite(velocidade2, velocidadeRotacao);
    digitalWrite(motor2_a, HIGH);
    digitalWrite(motor2_b, LOW);
}