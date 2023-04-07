#include <Ultrasonic.h>
#include <Servo.h>

const int TRIGG = 3, ECHO = 4, BUZZER = 5, VERMELHO = 6, VERDE = 7;
Ultrasonic ultrasonic(TRIGG, ECHO);
Servo servo;

void setup() {
    pinMode(BUZZER, OUTPUT);
    pinMode(VERMELHO, OUTPUT);
    pinMode(VERDE, OUTPUT);
}

void loop() {  
    if(ultrasonic.Ranging(CM) < 15) {
        contolaLeds(LOW, HIGH);
        variacaoAlarme();
    } else {
        contolaLeds(HIGH, LOW);
        noTone(BUZZER);
    }
}

void contolaLeds(int estadoVerde, int estadoVermelho) {
    digitalWrite(VERDE, estadoVerde);
    digitalWrite(VERMELHO, estadoVermelho);
}

void variacaoAlarme() {
  for(int x = 0; x < 180; x++) {
    int frequencia = 2000 + (int((sin(x*3.1416/180))*1000));
    tone(BUZZER, frequencia);
    delay(2);
  }
}