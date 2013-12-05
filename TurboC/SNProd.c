#include <stdio.h>
#include <conio.h>
void mySwap(int arr[] , int a , int b){
	int temp = arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
void mySort(int arr[] , int s){
	// insertion sort
	int i,j;
	for(i = 0 ; i < s ; i++){
		for(j=i ; j > 0 ; j--){
			if(arr[j-1]>arr[j]) mySwap(arr,j,j-1);
			else break;
		}
	}
}
int posProd(int arr[],int s){
	int i = 0 , prod = 1;
	while(arr[i++]<0){ // do nothing
	 }
	i--;
	while(i<s) { prod = prod * arr[i++]; }
	return prod;
}
int main(void){
	int arr[10] = {-1 , 2 , -89 , 56 , 8 , 1 , 45 ,-5 , 6 , 6} , min , max , i , j , prod;
	mySort(arr,10);
	for(i=0 ; i < 10 ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	prod = posProd(arr,10);
	printf("product of pos numbers : %d\n",prod);
	getch();
	clrscr();
	return 0;

}