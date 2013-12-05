#include<stdio.h>
#include<conio.h>

int main(void){
	int num = 6548 , rem , i , sum = 0 , prod = 1;
	int temp = num;
	

	for(i=1; temp > 0 ; i++){
		rem = temp % 10;
		if(i%2 != 0) { sum = sum + rem; prod = prod * rem ; } // sum and product of odds
		temp = temp / 10;		
	}
	printf("\n\nsum of odds: %d , prod of odds: %d" , sum , prod);
	getch();
	clrscr();
	return 0;
	
}