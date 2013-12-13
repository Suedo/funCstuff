
#include<stdio.h>
#include<conio.h>

int prod(int num){
	int p = 1, i;
	while(num > 0){ 
		p = p*(num%10); num = num / 10;
	}
	return p;
}

int main(void){
	int arr[5] = {24,45,11,14,23} , i ;
	for(i=0 ; i<5 ; i++) if( arr[i]%2 != 0 ) printf(" product of %d : %d\n",arr[i],prod(arr[i]));
	getch(); clrscr() ; return 0;
}