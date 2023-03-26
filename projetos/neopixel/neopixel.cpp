#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels_1 = Adafruit_NeoPixel(24, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(16, 4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_3 = Adafruit_NeoPixel(12, 5, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel pixels_faixa_1 = Adafruit_NeoPixel(20, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_2 = Adafruit_NeoPixel(16, 8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_3 = Adafruit_NeoPixel(12, 9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_4 = Adafruit_NeoPixel(10, 10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_5 = Adafruit_NeoPixel(8, 11, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_6 = Adafruit_NeoPixel(6, 12, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_faixa_7 = Adafruit_NeoPixel(4, 12, NEO_GRB + NEO_KHZ800);

void setup() {
    pixels_1.begin();
    pixels_2.begin();
    pixels_3.begin();
    
    pixels_1.setBrightness(255);
    pixels_2.setBrightness(255);
    pixels_3.setBrightness(255);

    pixels_faixa_1.begin();
    pixels_faixa_2.begin();
    pixels_faixa_3.begin();
    pixels_faixa_4.begin();
    pixels_faixa_5.begin();
    pixels_faixa_6.begin();
    pixels_faixa_7.begin();

    pixels_faixa_1.setBrightness(255);
    pixels_faixa_2.setBrightness(255);
    pixels_faixa_3.setBrightness(255);
    pixels_faixa_4.setBrightness(255);
    pixels_faixa_5.setBrightness(255);
    pixels_faixa_6.setBrightness(255);
    pixels_faixa_7.setBrightness(255);
}

void loop() {
    neoPixel24();
    neoPixel16();
    neoPixel12();

    neoPixeFaixa20();
    neoPixeFaixa16();
    neoPixeFaixa12();
    neoPixeFaixa10();
    neoPixeFaixa8();
    neoPixeFaixa6();
    neoPixeFaixa4();
}

void neoPixel24() {
    uint32_t red = pixels_1.Color(255, 0, 0); 
    uint32_t orange = pixels_1.Color(255, 100, 10); 
    uint32_t yellow = pixels_1.Color(255, 255, 0); 
    uint32_t green = pixels_1.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_1.Color(0, 115, 0);
    uint32_t cyan = pixels_1.Color(0, 255, 255); 
    uint32_t blue = pixels_1.Color(0, 0, 255); 
    uint32_t magenta = pixels_1.Color(255, 0, 255); 
    uint32_t purple = pixels_1.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 24; i++) {
            pixels_1.setPixelColor(i, colors[k]);
            delay(50);
            pixels_1.show();
        }
    }
}

void neoPixel16() {
    uint32_t red = pixels_2.Color(255, 0, 0); 
    uint32_t orange = pixels_2.Color(255, 100, 10); 
    uint32_t yellow = pixels_2.Color(255, 255, 0); 
    uint32_t green = pixels_2.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_2.Color(0, 115, 0);
    uint32_t cyan = pixels_2.Color(0, 255, 255); 
    uint32_t blue = pixels_2.Color(0, 0, 255); 
    uint32_t magenta = pixels_2.Color(255, 0, 255); 
    uint32_t purple = pixels_2.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 16; i++) {
            pixels_2.setPixelColor(i, colors[k]);
            delay(50);
            pixels_2.show();
        }
    }
}

void neoPixel12() {
    uint32_t red = pixels_3.Color(255, 0, 0); 
    uint32_t orange = pixels_3.Color(255, 100, 10); 
    uint32_t yellow = pixels_3.Color(255, 255, 0); 
    uint32_t green = pixels_3.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_3.Color(0, 115, 0);
    uint32_t cyan = pixels_3.Color(0, 255, 255); 
    uint32_t blue = pixels_3.Color(0, 0, 255); 
    uint32_t magenta = pixels_3.Color(255, 0, 255); 
    uint32_t purple = pixels_3.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 12; i++) {
            pixels_3.setPixelColor(i, colors[k]);
            delay(50);
            pixels_3.show();
        }
    }
}

void neoPixeFaixa20() {
    uint32_t red = pixels_faixa_1.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_1.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_1.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_1.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_1.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_1.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_1.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_1.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_1.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 20; i++) {
            pixels_faixa_1.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_1.show();
        }
    }
}

void neoPixeFaixa16() {
    uint32_t red = pixels_faixa_2.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_2.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_2.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_2.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_2.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_2.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_2.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_2.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_2.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 16; i++) {
            pixels_faixa_2.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_2.show();
        }
    }
}

void neoPixeFaixa12() {
    uint32_t red = pixels_faixa_3.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_3.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_3.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_3.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_3.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_3.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_3.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_3.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_3.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 12; i++) {
            pixels_faixa_3.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_3.show();
        }
    }
}

void neoPixeFaixa10() {
    uint32_t red = pixels_faixa_4.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_4.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_4.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_4.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_4.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_4.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_4.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_4.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_4.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 10; i++) {
            pixels_faixa_4.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_4.show();
        }
    }
}

void neoPixeFaixa8() {
    uint32_t red = pixels_faixa_5.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_5.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_5.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_5.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_5.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_5.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_5.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_5.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_5.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 8; i++) {
            pixels_faixa_5.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_5.show();
        }
    }
}

void neoPixeFaixa6() {
    uint32_t red = pixels_faixa_5.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_5.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_5.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_5.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_5.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_5.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_5.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_5.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_5.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 6; i++) {
            pixels_faixa_5.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_5.show();
        }
    }
}

void neoPixeFaixa4() {
    uint32_t red = pixels_faixa_6.Color(255, 0, 0); 
    uint32_t orange = pixels_faixa_6.Color(255, 100, 10); 
    uint32_t yellow = pixels_faixa_6.Color(255, 255, 0); 
    uint32_t green = pixels_faixa_6.Color(0, 255, 0); 
    uint32_t dkgreen = pixels_faixa_6.Color(0, 115, 0);
    uint32_t cyan = pixels_faixa_6.Color(0, 255, 255); 
    uint32_t blue = pixels_faixa_6.Color(0, 0, 255); 
    uint32_t magenta = pixels_faixa_6.Color(255, 0, 255); 
    uint32_t purple = pixels_faixa_6.Color(50, 0, 50); 

    uint32_t colors[9] = {
        red,
        orange,
        yellow,
        green,
        dkgreen,
        cyan,
        blue,
        magenta,
        purple
    };

    for (int k = 0; k <= 9; k++) {
        for (int i = 0; i < 4; i++) {
            pixels_faixa_6.setPixelColor(i, colors[k]);
            delay(50);
            pixels_faixa_6.show();
        }
    }
}