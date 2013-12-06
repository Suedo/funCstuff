/*
 Write a program using do-while loop to print numbers and their cubes up to 10
*/

#include <stdio.h>
#include <conio.h>

int main(void){
	int i=1;
	do{
		printf("number : %d , cube : %d\n",i,i*i*i); // we could also use `pow(base,exponent)` function from Math.h
		i++;
	}while(i < 11);
	getch(); clrscr() ; return 0;
}