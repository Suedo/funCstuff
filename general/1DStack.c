#include<stdio.h>
#include<conio.h>
#define LEN 25

void push(int* stack , int* top){
	int item;
	printf("enter item to push : ");
	scanf("%d",&item);
	while(getchar()!='\n') {} // clean stdin
	stack[*top] = item;
	(*top)++;
}

int pop(int* stack , int* top){
	int temp = stack[*top]; (*top)--; return temp;
}

void check(int top){
	if(top<0) printf("underflow\n");
	else if(top==0) printf("empty array\n");
	else if(top==(LEN - 1)) printf("array full\n");
	else if(top>(LEN - 1)) printf("overflow\n");
}

void display(int* stack , int top){
	int i;
	printf("\n");
	for(i=0 ; i < LEN ; i++){
		if(i < top) printf("%d.",stack[i]);
		else if(i == top) printf("%c.",'T');		
		else if(i > top) printf("%c.",'*');		
	}
}

int main(void){
	int top = 0 , stack[LEN];
	char c;
	printf("Press : i(push) , d(pop) , p(print) , q(quit)\n");
	while((c=getchar())!='q'){
		if(c=='\n') continue;
		switch(c){
			case 'i' : check(top) ; push(stack,&top) ; break;
			case 'd' : check(top) ; printf("popped : %d\n",pop(stack,&top)) ; break;
			case 'p' : display(stack,top); break;
		}
	}
	if(c=='q') printf("exiting program\n");
	return 0;
}