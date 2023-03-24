#include <Servo.h>

Servo servo;
int contador;

void setup() {
    servo.attach(0);
    servo.write(0);
}

void loop() {
    // movimentação até 180
    for (contador = 0; contador <= 180; contador++) {
        servo.write(contador);
        delay(15);
    }

    // movimentação até 0
    for (contador = 180; contador >= 0; contador--) {
        servo.write(contador);
        delay(15);
    }
}