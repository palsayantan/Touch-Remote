#include <BleMouse.h>
BleMouse bleMouse;

#define Threshold 20 /* Greater the value, more the sensitivity */

bool scrolling;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleMouse.begin();
  bleMouse.move(0, 0, 0, 0); // Pointer(left/right), Pointer(up/down), Scroll(down/up), Scroll(left/right)
}

void loop() {
  if (bleMouse.isConnected()) {
    if (touchRead(T2) < Threshold) {
      if (touchRead(T6) < Threshold) {
        bleMouse.move(0, 0, 1, 0);         // Scroll UP
        delay(100);
      }
      else {
        bleMouse.move(0, -1, 0, 0);          // Pointer UP
        delay(1);
      }
    }

    if (touchRead(T7) < Threshold) {
      if (touchRead(T6) < Threshold) {
        bleMouse.move(0, 0, -1, 0);          // Scroll DOWN
        delay(100);
      }
      else {
        bleMouse.move(0, 1, 0, 0);         // Pointer DOWN
        delay(1);
      }
    }

    if (touchRead(T0) < Threshold) {
      if (touchRead(T6) < Threshold) {
        bleMouse.move(0, 0, 0, -1);          // Scroll LEFT
        delay(100);
      }
      else {
        bleMouse.move(1, 0, 0, 0);          // Pointer LEFT
        //delay(1);
      }
    }

    if (touchRead(T9) < Threshold) {
      if (touchRead(T6) < Threshold) {
        bleMouse.move(0, 0, 0, 1);          // Scroll RIGHT
        delay(100);
      }
      else {
        bleMouse.move(-1, 0, 0, 0);          // Pointer RIGHT
        //delay(1);
      }
    }

    if (touchRead(T5) < Threshold) {
      bleMouse.click(MOUSE_LEFT);
      delay(500);
    }

    if (touchRead(T3) < Threshold) {
      bleMouse.click(MOUSE_RIGHT);
      delay(500);
    }
    else {
      bleMouse.move(0, 0, 0, 0);
    }
  }
}
