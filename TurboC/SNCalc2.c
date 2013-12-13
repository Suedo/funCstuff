/*
 Simple Calclulator
*/

void calc(char c){
	float num1,num2,ans;
	printf("enter num1 : "); scanf("%g",&num1);
	printf("enter num2 : "); scanf("%g",&num2);
	switch(c){
		case '+' : ans = num1 + num2; break;
		case '-' : ans = num1 - num2; break;
		case '*' : ans = num1 * num2; break;
		case '/' : ans = num1 / num2; break;

	}
	printf("%g %c %g = %g \n",num1,c,num2,ans);
	while(getchar()!='\n'){} // cleanup stdin from junk left by scanf
}

int main(void){
	char c; clrscr();
	printf("Simple Calculator Program.\nPress : a(add), s(sub), m(mul) , d(div) , q(quit)\n**********************************************************\n\n");

	while((c=getchar())!='q'){

		if(c=='\n') continue; // getchar reads both character and the newline.

		else if(c=='a'||c=='s'||c=='m'||c=='d') calc(c);

		else if(c=='q') printf("exiting program\n");

		else printf("\n%c is invalid. Try again. \n",c);

	}
	getch();return 0;

}