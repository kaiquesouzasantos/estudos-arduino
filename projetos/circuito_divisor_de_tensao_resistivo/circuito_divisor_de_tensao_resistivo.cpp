int portaAnalog = A0;

void setup(){
  pinMode(portaAnalog, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(analogRead(portaAnalog));
}