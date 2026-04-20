// Ogawa

#include <board.h>

void setup() {
}

void loop() {
    LcdDrv_clear();
    LcdDrv_setCursor(0, 0);
    LcdDrv_print("Hello");
    LcdDrv_update();
    delay(1000);

    LcdDrv_clear();
    LcdDrv_setCursor(1, 0);
    LcdDrv_print("World");
    LcdDrv_update();
    delay(1000);
}
