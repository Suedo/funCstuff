/*
 Simple Calclulator
*/

void add(){
	float num1,num2;
	printf("enter num1 : "); scanf("%g",&num1);
	printf("enter num2 : "); scanf("%g",&num2);
	printf("%g + %g = %g \n",num1,num2,(num1+num2));
	while(getchar()!='\n'){} // cleanup stdin from junk left by scanf
}

void sub(){
	float num1,num2;
	printf("enter num1 : "); scanf("%g",&num1);
	printf("enter num2 : "); scanf("%g",&num2);
	printf("%g - %g = %g \n",num1,num2,(num1-num2));
	while(getchar()!='\n'){} // cleanup stdin from junk left by scanf
}

void mul(){
	float num1,num2;
	printf("enter num1 : "); scanf("%g",&num1);
	printf("enter num2 : "); scanf("%g",&num2);
	printf("%g * %g = %g \n",num1,num2,(num1*num2));
	while(getchar()!='\n'){} // cleanup stdin from junk left by scanf
}

void div(){
	float num1,num2;
	printf("enter num1 : "); scanf("%g",&num1);
	printf("enter num2 : "); scanf("%g",&num2);
	printf("%g / %g = %g \n",num1,num2,(num1/num2));
	while(getchar()!='\n'){} // cleanup stdin from junk left by scanf
}

int main(void){
	char c; clrscr();
	printf("Simple Calculator Program.\nPress : a(add), s(sub), m(mul) , d(div) , q(quit)\n**********************************************************\n\n");
	while((c=getchar())!='q'){

		if(c=='\n') continue; // getchar reads both character and the newline.

		switch(c){
			case 'a' : add() ; break;
			case 's' : sub() ; break;
			case 'm' : mul() ; break;
			case 'd' : div() ; break;
			default  : printf("\n%c is invalid. Try again. \n",c); break;
		}

	}
	if(c=='q') printf("exiting program\n");
	getch();return 0;	


}