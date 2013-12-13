/*
 2nd largest divisor 
ex : 21 > {1,3,7,21} . therefore 7 is the answer
16200 > {1,2,3,5,6,9,10}

*/
#include<stdio.h>
#include<conio.h>

int main(void){
	int gnum = 5000, l , u = gnum;
	for(l=2 ; l < u ; l++)
		if(gnum % l == 0) {
			printf("2nd largest divisor of %d is : %d\n",gnum,gnum/l); break;
		}
	getch(); clrscr(); return 0;
}