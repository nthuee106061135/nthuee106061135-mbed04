#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);

TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{
      lcd.printf("106061135\n");

      while(true)

      {
            for(int i = 30 ;i >= 0;i--){
                lcd.locate(5,1);
                lcd.printf("%5i",i); 
                wait(1);
            }

      }

}