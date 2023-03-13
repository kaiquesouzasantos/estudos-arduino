#include <AFMotor.h>

AF_DCMotor motor1(1);

void setup() {
    motor1.setSpeed(0);
}

void loop() {
    motor1.setSpeed(255);
    motor1.run(FORWARD); // horario

    delay(2000);

    motor1.setSpeed(0);
    motor1.run(RELEASE); // estacionario

    delay(2000);

    motor1.setSpeed(255);
    motor1.run(BACKWARD); // anti-horario
}