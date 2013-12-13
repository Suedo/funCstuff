/*
2D stack
*/

#include <stdio.h>
#define LEN 5 // length of each side of 2D array

// 2D to 1D conversion
int lin(int row , int col ){ return (row*LEN + col) ;}

void push(int (*stack)[5]  , int* top){ 
	int item , row , col;
	printf("enter item to push : ");
	scanf("%d",&item);
	while(getchar()!='\n') {} // clean stdin
	row = (*top)/LEN;
	col = (*top)%LEN;
	(*top)++;
	stack[row][col] = item;
}

int pop(int (*stack)[5]  , int* top){ 
	int row = *top/LEN , col = *top%LEN;
	(*top)--;
	stack[row][col] = -1; 
}

void display(int (*stack)[5]  , int* top){
	int i,j,k;
	for(i=0 ; i < LEN ; i++){
		for(j=0 ; j < LEN ; j++){
			k = lin(i,j) ;
			if(k < *top) printf("%3d .",stack[i][j]);
			else if (k == *top) printf("%3c .",'T');
			else printf("%3c .",'*');
		}printf("\n");
	}
}

void check(int top){
	if(top<0) printf("underflow\n");
	else if(top==0) printf("empty array\n");
	else if(top==(LEN*LEN - 1)) printf("array full\n");
	else if(top>(LEN*LEN - 1)) printf("overflow\n");
}

int main(void){
	int stack[LEN][LEN];
	int top = 0;
	char c;
	printf("Press : i(push) , d(pop) , p(print) , q(quit)\n");
	while((c=getchar())!='q'){
		if(c=='\n') continue;
		switch(c){
			case 'i' : check(top) ; push(stack,&top) ; break;
			case 'd' : check(top) ; pop(stack,&top) ; break;
			case 'p' : display(stack,&top); break;
		}
	}
	if(c=='q') printf("exiting program\n");
	return 0;	
}