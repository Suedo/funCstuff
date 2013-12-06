/*
Write a program to check a given is odd or even using Switch..case statement
*/

#include <stdio.h>
#include <conio.h>

int main(void){
	int i , number = 546 ;
	switch(number%2){
		case 0: printf("%d is an even number\n",number); break;
		case 1: printf("%d is an odd number\n",number); break;
	}	
	getch(); clrscr() ; return 0;
}