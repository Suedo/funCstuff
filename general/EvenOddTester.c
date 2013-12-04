#include<stdio.h>
int main(){
	char c[10];
	char f;
	int x;
	printf("enter number to check , q to quit \n");
	while(1){
		fgets(c,8,stdin);
		if(c[0] == 'q')
			break;
		sscanf(c,"%d",&x);
		if(x&1) printf("odd \n");
		else printf("even \n");
	}
	return 0;
}