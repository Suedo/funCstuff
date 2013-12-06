/*
Write a program that will find the product of a collection of data values. 
The program should ignore all negative values and terminate when a zero value is encountered..
*/

int main(void){
	int values[10]={-5,-20,5,8,9,9,3,6,0,80} , i;
	long int prod=1L;
	
	printf("original array : ");
	for(i=0 ; i < 10 ; i++) printf("%d ",values[i]);
	printf("\n");
	
	for(i=0 ; i < 10 ; i++) 
		if(values[i] == 0) break; else if(values[i]>0) prod = prod * values[i];
	printf("product : %ld",prod);
	getch(); clrscr() ; return 0;

}