#include <stdio.h>
#include "main.h"

/**
* jack_bauer - Used to Print lower case alphabet 10 times
* Return: Void (Sucess)
*/


void jack_bauer(void)
{

int r = 0;
while (r < 24)
{

int e = 0;

while (e < 60)
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
_putchar(':');
_putchar(e / 10 + '0');
_putchar(e % 10 + '0');
_putchar(10);
e++;
}
r++;
}
}
