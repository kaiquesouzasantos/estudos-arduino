int potenciometro = A0, valor = 0;

void setup() {
    pinMode(potenciometro, INPUT);
    Serial.begin(9600);
}

void loop() {
    /*
        -> limita o funcionamento a uma faixa/intervalo

        constrain(<valor>, <minimo>, <maximo>);
    */

    valor = analogRead(potenciometro);
    valor = constrain(valor, 500, 800);

    Serial.println(valor);
}