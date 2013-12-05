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

int secondHighest(int arr[],int s){
	int max = s-1 , i = s-2;
	while(arr[i]==arr[max]){
		i--;
		if(i==0) break;
	}
	return arr[i];
}
int secondLowest(int arr[],int s){
	int min = 0 , i = 1;
	while(arr[i]==arr[min]){
		i++;
		if(i==s) break;
	}
	return arr[i];
}

long int posProd(int arr[],int s){
	int i = 0 ;
	long int prod = 1L;
	while(arr[i]<0){ printf("%d ",i ) ; i++; /* do nothing */}
	printf("\n");
	while(i<s){
		prod = prod * arr[i];
		printf("prod: %ld , arr[%d] : %d\n",prod,i,arr[i]);
		i++;
	}
	return prod;
}

int main(void){
	int arr[10] = {-1 , 2 , -89 , 56 , 8 , 1 , 45 ,-5 , 6 , 6} , min , max , i , j;
	int sum=0,sh,sl;
	long int prod;
	mySort(arr,10);
	for(i=0 ; i < 10 ; i++){
		sum=sum+arr[i];
		printf("%d ",arr[i]);

	}
	printf("\n\n");
	sl = secondLowest(arr,10);
	sh = secondHighest(arr,10);
	prod = posProd(arr,10);
	printf("min : %d , max : %d, sum: %d , secHigh: %d , secLow: %d \n",arr[0],arr[9],sum,sh,sl);
	printf("product of pos numbers : %ld\n",prod);
	getch();
	clrscr();
	return 0;
	
}