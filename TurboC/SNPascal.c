/*
 pascals triangle
*/

int fac(int num){
	int f=1;
	while(num > 1) { f = f*num ; num--; } 
	return f;
}

int com(int n , int r){ // combination
	return (fac(n)/(fac(r)*fac(n-r)));
}

int main(void){
	int i , j , height;
	printf("enter height of triangle : "); scanf("%d", &height);

	for(i=0 ; i < height ; i++){
		for(j=0 ; j < i+1 ; j++){
			printf("%d ",com(i,j));
		}
		printf("\n");
	}
	getch(); clrscr() ; return 0;

}