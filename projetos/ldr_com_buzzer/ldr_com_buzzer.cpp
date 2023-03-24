int ldr = A0, buzzer = 0;

void setup() {
	pinMode(buzzer, OUTPUT);
	pinMode(ldr, INPUT);
}

void loop() {
	if(analogRead(ldr) > 900) {
		digitalWrite(buzzer, HIGH);
	} else {
		digitalWrite(buzzer, LOW);
	}
}
