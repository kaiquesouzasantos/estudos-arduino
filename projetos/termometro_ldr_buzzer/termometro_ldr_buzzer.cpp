int L = A1; 
int temp = A0; 

int buzzer = 0;
int led1 = 13;
int led2 = 12;
int led3 = 11;

int led4 = 10;
int led5 = 9;
int led6 = 8;
int ledAB = 1;

void setup() {
    pinMode(L, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(ledAB, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    controleTemperatura();
    controleLuz();
}

void controleLuz(){
    int valorL = 0;
    valorL = analogRead(L);

    Serial.print("valor da luminosidade = ");
    Serial.println(valorL);
    Serial.println("--------------------------------------");


    if (valorL >= 600) 
        digitalWrite(led6, HIGH);
    else
        digitalWrite(led6, LOW); 

    if (valorL >= 500) 
        digitalWrite(led5, HIGH);
    else
        digitalWrite(led5, LOW);

    if (valorL >= 400) { 
        digitalWrite(led4, HIGH); 
        digitalWrite(ledAB, LOW); 
    } else {
        digitalWrite(led4, LOW); 
        digitalWrite(ledAB, HIGH); 
    }
}

void controleTemperatura(){
    int sensorTemp = 0;
    sensorTemp = analogRead(temp);

    float tensao = sensorTemp * (5019.9 / 1024.0);
    float temperaturaC = (tensao - 500) / 10;

    Serial.print("valor da temperatura = ");
    Serial.println(temperaturaC);

    if (temperaturaC >= 10) 
        digitalWrite(led1, HIGH);
    else
        digitalWrite(led1, LOW); 

    if (temperaturaC >= 20) 
        digitalWrite(led2, HIGH);
    else
        digitalWrite(led2, LOW); 

    if (temperaturaC >= 30) { 
        digitalWrite(led3, HIGH);
        tone(buzzer, 261); 
        delay(200);
    } else {
        digitalWrite(led3, LOW);
        tone(buzzer, 0); 
        noTone(buzzer);
    }
}