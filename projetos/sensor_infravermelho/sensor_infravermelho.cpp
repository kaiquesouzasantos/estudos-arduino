#include <IRremote.h>

int infravermelho = 2;

void setup() {
    IrReceiver.begin(infravermelho);
    Serial.begin(9600);
}

void loop() {
    if(IrReceiver.decode()) {
        Serial.println(IrReceiver.decodedIRData.decodedRawData);
        IrReceiver.resume();
    }
}