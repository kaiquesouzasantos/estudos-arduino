#include <SevenSegment.h>
SevenSegment display(2, 3, 4, 5, 6, 7, 8, 9);

void setup() {
}

void loop() {
  for (int i = 0; i < 10; i++) {
    display.print(i);
    delay(250); 
  }
}
