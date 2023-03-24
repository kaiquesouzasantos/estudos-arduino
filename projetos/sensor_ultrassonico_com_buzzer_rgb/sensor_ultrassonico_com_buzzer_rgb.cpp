#include <Ultrasonic.h>

float centimetro;
int buzzer = 2, vermelho = 3, azul = 4, verde = 5;

Ultrasonic ultrasonic(
    1, 0 // -> trigger, echo
);

void setup() {
    pinMode(buzzer, OUTPUT);
    pinMode(vermelho, OUTPUT);
    pinMode(azul, OUTPUT);
    pinMode(verde, OUTPUT);
}

void loop() {
    centimetro = ultrasonic.convert(ultrasonic.timing(), Ultrasonic::CM)
    
    if(centimetro < 5){
        digitalWrite(buzzer, HIGH);

        digitalWrite(vermelho, HIGH);
        digitalWrite(azul, HIGH);
        digitalWrite(verde, LOW);
    } else if (centimetro >= 5 and centimetro <= 15) {
        digitalWrite(buzzer, HIGH);
        digitalWrite(vermelho, LOW);
        digitalWrite(azul, HIGH);
        digitalWrite(verde, LOW);
    } else {
        digitalWrite(vermelho, LOW);
        digitalWrite(azul, LOW);
        digitalWrite(verde, HIGH);
    }
}