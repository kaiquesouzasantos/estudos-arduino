#include <Servo.h>
Servo servo;

int buzzer = 13;
int trig = 0;
int echo = 1;
int distancia;
int tempo;

void setup() {
    Serial.begin(9600);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(buzzer, OUTPUT);
    servo.attach(2);
}

void loop() {
    digitalWrite(trig, HIGH);
    delay(1);
    digitalWrite(trig, LOW);
    tempo = pulseIn(echo, HIGH);
    distancia = tempo / 58.2;
    Serial.println(distancia);
    delay(500);

    if (distancia <= 50) {
        servo.write(180);
        tone(buzzer, 5);
        delay(1000);

    } else {
        servo.write(0);
        noTone(buzzer);
    }
}