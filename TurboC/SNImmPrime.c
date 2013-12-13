/* immdiate prime */

int checkPrime(num){

	int flag = 1 , i;
	for(i=2 ; i < num/2 ; i++){ 
		if(num%i == 0) { flag = 0; break; } 
	}
	return flag;
}

int main(void){
	clrscr();
	int gnum = 17; // a given prime number
	int limit = 2*gnum , i;
	for( i=gnum+1 ; i< limit ; i++){
		if( checkPrime(i) == 1 ) { printf("%d is the next prime.",i); break;}
	}
	getch(); return 0;
}