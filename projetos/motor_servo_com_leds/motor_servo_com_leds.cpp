#include <Servo.h>

Servo servo;
int contador, verde = 2, vermelho = 3;

void setup() {
    servo.attach(0);
    servo.write(0);

    pinMode(verde, OUTPUT);
    pinMode(vermelho, OUTPUT);
}

void loop() {
    // movimentação até 180
    controleLeds(LOW, HIGH);
    for (contador = 0; contador <= 180; contador++) {
        servo.write(contador);
        delay(15);
    }

    // movimentação até 0
    controleLeds(LOW, HIGH);
    for (contador = 180; contador >= 0; contador--) {
        servo.write(contador);
        delay(15);
    }
}

void controleLeds(int estadoVerde, int estadoVermelho) {
    digitalWrite(verde, estadoVerde);
    digitalWrite(vermelho, estadoVermelho);
}