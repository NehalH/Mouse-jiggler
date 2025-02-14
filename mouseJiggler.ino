#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {

  moveX(500, 'r');
  DigiMouse.delay(500);

  moveY(500, 'u');
  DigiMouse.delay(500);
  
  moveY(500, 'd');
  DigiMouse.delay(500);

  moveX(500, 'r');
  DigiMouse.delay(500);

  moveX(1000, 'l');
  DigiMouse.delay(500);

  scroll(100, 'u');
  DigiMouse.delay(500);

  scroll(100, 'd');
  DigiMouse.delay(5000);

  DigiMouse.rightClick();
  DigiMouse.delay(500);
  DigiMouse.leftClick();

  DigiMouse.delay(5000);

  //for compatability with other libraries use DigiMouse.move(X, Y, scroll, buttons)
}

/**
 * @brief  Moves pointer in X axis
 * 
 * @param pixels Number of pixels to scroll
 * @param direction 'l' to move pointer left and 'r' to move right
 */
void moveX(int pixels, char direction) {
  for(int i = pixels; i > 0; i--){
    DigiMouse.delay(10);
    if(direction == 'l')
      DigiMouse.moveX(-1);
    else if (direction == 'r')
      DigiMouse.moveX(1);
  }
}

/**
 * @brief Moves pointer in Y axis
 * 
 * @param pixels Number of pixels to scroll
 * @param direction  'u' to move pointer up and 'd' to move down
 */
void moveY(int pixels, char direction) {
  for(int i = pixels; i > 0; i--){
    DigiMouse.delay(10);
    if(direction == 'u')
      DigiMouse.moveY(-1);
    else if (direction == 'd')
      DigiMouse.moveY(1);
  }
}

/**
 * @brief  Scrolls in Y axis
 * 
 * @param pixels Number of pixels to scroll
 * @param direction 'u' for scroll up and 'd' for scroll down
 */
void scroll(int pixels, char direction) {
  for(int i = pixels; i > 0; i--){
    DigiMouse.delay(10);
    if(direction == 'u')
      DigiMouse.scroll(1);
    else if (direction == 'd')
      DigiMouse.scroll(-1);
  }
}