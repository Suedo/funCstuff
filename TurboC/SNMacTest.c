/*
Pascals Triangle
*/

#include <stdio.h>
#include <conio.h>

#define fact(a) ( int f = 1 ; while(a > 1){ f = f*a ; a-- ; } return f; )

int main(void) {
	clrscr(); printf("factorial of 4 : %d" , fact(4)); getch(); return 0;
}