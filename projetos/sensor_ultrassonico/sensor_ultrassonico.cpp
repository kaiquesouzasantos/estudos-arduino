#include <Ultrasonic.h>

float centimetro;
long leituraSensor;

Ultrasonic ultrasonic(
    1, 0 // -> trigger, echo
);

void setup() {
    Serial.begin(9600);
}

void loop() {
    leituraSensor = ultrasonic.timing(); // timing() -> Realize a leitura dos valores do sensor
    centimetro = ultrasonic.convert(leituraSensor, Ultrasonic::CM); // convert(<valorSensor>, <CONST_MEDIDA>) -> converte o valor da leitura
    Serial.print("Distancia em cm: "+centimetro);
    delay(1000);
}