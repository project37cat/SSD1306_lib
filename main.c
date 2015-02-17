//SSD1306 display test
//
//17-feb-2015


#include "oled.h"


int main(void)
{
oled_init();
oled_clear();

oled_goto(0,0);
oled_string("Hello world!");

oled_goto(0,1);
oled_string("1234567890");

oled_goto(24,2);
oled_string("***");

while(1)
	{

	}
}
