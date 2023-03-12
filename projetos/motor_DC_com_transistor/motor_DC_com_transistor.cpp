/**
    TRANSISTOR:
        -> tem como funcao, controlar o funcionamento do aterramento, baseado na tensao recebida, ou seja, abre-fecha, liga-desliga.
        -> no caso de uso em questao, ele controla a ativacao do motor, pois a alimentacao e de uma fonte externa.

        -> tem 3 entradas:
            - C:
            - B: base, local onde recebe a tensao
            - E:

        -> comentarios:
            - se o pino BASE receber tensao, o transistor permite a passagem da corrente.
            - se o pino BASE nao receber tensao, o transistor bloqueia a passagem da corrente.
*/

int motor = 0;

void setup(){
    pinMode(motor, OUTPUT);
    digitalWrite(motor, HIGH);
}

void loop() {
    
}