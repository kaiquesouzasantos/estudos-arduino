int touch = 2, led = 3;

void setup() {
    pinMode(touch, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    if(digitalRead(touch) == 1){
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, HIGH);
    }
}