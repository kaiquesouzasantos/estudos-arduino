int led = 0, potenciometro = A0;

void setup() {  
    pinMode(led, OUTPUT);
    pinMode(potenciometro, INPUT);
}

void loop() {
    /*
        -> realiza a equivalencia entre os valores, onde 3(0 - 255) == 12(0 - 1023)

        map(
            <valor_leitura>, 
            <valor_minimo_entrada>, <valor_maximo_entrada>, 
            <valor_minimo_saida>, <valor_maximo_saida>
        )
    */ 

   analogWrite(
        led, map(
            analogRead(potenciometro),
            0, 1023,
            0, 255
        )
    );
   
}