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
        controlaComponentes(HIGH, LOW, HIGH, LOW);
    } else if (centimetro >= 5 and centimetro <= 15) {
        controlaComponentes(LOW, HIGH, LOW, HIGH);
    } else {
        controlaComponentes(LOW, LOW, HIGH, LOW);
    }
}

void controlaComponentes(estadoVermelho, estadoAzul, estadoverde, estadoBuzzer) {
    digitalWrite(vermelho, estadoVermelho);
    digitalWrite(azul, estadoAzul);
    digitalWrite(verde, estadoVerde);
    digitalWrite(buzzer, estadoBuzzer);
}
