/*
1D stack
*/

#define LEN 25

void push(int *stack  , int* top){ 
	int item;
	printf("enter item to push : ");
	scanf("%d",&item);
	while(getchar()!='\n') {} // clean stdin
	stack[*top] = item;
	(*top)++;
}

int pop(int *stack , int* top){ 
	int temp;
	(*top)--;
	temp = stack[*top];
	return temp;

}

void display(int *stack , int* top){
	int i,j,k;
	for(i=0 ; i < LEN ; i++){
		if(i < *top) printf("%d.",stack[i]);
		else if (i == *top) printf("%c.",'T');
		else printf("%c.",'*');
	}printf("\n");
}

void check(int top){
	if(top<0) printf("underflow\n");
	else if(top==0) printf("empty array\n");
	else if(top==(LEN*LEN - 1)) printf("array full\n");
	else if(top>(LEN*LEN - 1)) printf("overflow\n");
}

int main(void){
	int stack[LEN];
	int top = 0;
	char c;
	clrscr();
	printf("Press : i(push) , d(pop) , p(print) , q(quit)\n**********************************************************\n\n");
	while((c=getchar())!='q'){

		if(c=='\n') continue; // getchar reads both character and the newline.

		switch(c){
			case 'i' : push(stack,&top) ; check(top) ; break;
			case 'd' : printf("popped: %d\n",pop(stack,&top)) ; check(top) ; break;
			case 'p' : display(stack,&top); break;
			default  : printf("\n%c is invalid. Try again. \n",c); break;
		}

	}
	if(c=='q') printf("exiting program\n");
	return 0;	
}