#include <Keypad.h>

const byte LINHAS = 4, COLUNAS = 4;

char chaves[LINHAS][COLUNAS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// AS PORTAS 0-1(RX-TX) NAO PODEM SER UTILIZADAS

byte pinosLinhas[LINHAS] = {10,9,8,7};
byte pinosColunas[COLUNAS] = {6,5,4,3};

Keypad teclado = Keypad(makeKeymap(chaves), pinosLinhas, pinosColunas, LINHAS, COLUNAS);

void setup() {
    Serial.begin(9600);
}

void loop() {
    char TECLA = teclado.getKey();
    delay(100);

    if(TECLA) {
        Serial.print(TECLA);
    }
}