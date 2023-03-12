/*
    DIODO:
        -> bloqueia a tensao causada pelo motor(ja que ele pode gerar energia), permitindo somente um sentido de fluxo de corrente

    CAPACITOR/TIP120:
        -> filtra o ruido causado pela tensao
*/

int motor = 0;

void setup(){
    pinMode(motor, OUTPUT);
    digitalWrite(motor, HIGH);
}

void loop(){

}