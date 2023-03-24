#include <Ultrasonic.h>

int buzzer = 2;

Ultrasonic ultrasonic(
    1, 0 // -> trigger, echo
);

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    if(ultrasonic.convert(ultrasonic.timing(), Ultrasonic::CM) < 5){
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }
}