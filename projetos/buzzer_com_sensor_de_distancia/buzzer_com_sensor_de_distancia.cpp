# define trigPin 7
# define echoPin 8
# define tempo 10 

int frequencia = 0; 
int buzzer = 13; 
int duration, distance; 

void setup() { 
    Serial.begin(9600); 
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
    pinMode(buzzer, OUTPUT); 
}

void loop() {
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;

    if (distance >= 40 || distance <= 0) {
        Serial.println("Cesta protegida");
        digitalWrite(buzzer, LOW);  
    } else {
        Serial.println("Pessoa Detectada");
        Serial.print("Distância= ");
        Serial.print(distance); 

        for (frequencia = 150; frequencia < 1800; frequencia += 1) { 
            tone(buzzer, frequencia, tempo);
            delay(3);
        }
        for (frequencia = 1800; frequencia > 150; frequencia -= 1) { 
            tone(buzzer, frequencia, tempo);
            delay(3);
        }
    }
}