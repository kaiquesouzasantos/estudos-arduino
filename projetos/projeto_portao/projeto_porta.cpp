#include <Ultrasonic.h>
#include <Servo.h>

int MOTOR = 5, VERMELHO = 6, VERDE = 7;

Ultrasonic ultrasonic(
    3, 4 // -> trigger, echo
);
Servo servo;

void setup() {
    servo.attach(MOTOR);
    pinMode(VERMELHO, OUTPUT);
    pinMode(VERDE, OUTPUT);

}

void loop() {
    if(ultrasonic.convert(ultrasonic.timing(), Ultrasonic::CM) < 30) {
        contolaLeds(LOW, LOW);
        piscaLed(VERDE);
        contolaLeds(LOW, HIGH);

        servo.write(180);
        delay(5000);

        contolaLeds(LOW, LOW);
        piscaLed(VERMELHO);
        contolaLeds(HIGH, LOW);
    }
}

void piscaLed(int LED) {
    for(int i = 0; i <= 50; i++) {
        digitalWrite(LED, HIGH);
        delay(200);
        digitalWrite(LED, LOW);
    }
}

void contolaLeds(int estadoVerde, int estadoVermelho) {
    digitalWrite(VERDE, estadoVerde);
    digitalWrite(VERMELHO, estadoVermelho);
}