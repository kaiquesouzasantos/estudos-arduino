int vivo = 2, morto = 3, batimentos;

void setup() {
    batimentos = 0;
    pinMode(vivo, OUTPUT);
    pinMode(morto, OUTPUT);
}

void loop() {
    if(batimentos <= 5){
        digitalWrite(vivo, HIGH);
        delay(1000);
        digitalWrite(vivo, LOW);
        delay(1000);

        batimentos++;
    } else {
        digitalWrite(morto, HIGH);
    }
}