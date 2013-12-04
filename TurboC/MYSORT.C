#include <stdio.h>
#include <conio.h> // only because of Turbo-C
#include <stdlib.h>
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
int countNegatives(int arr[] , int s){
	int count = 0, i = 0;
	for(i= 0; i < s ; i++) if(arr[i]<0) count++;
	return count;
}

int secondHighest(int arr[],int s){
	int max = s-1 , i = s-2;
	while(arr[i]==arr[max]){
		i--;
		if(i==0) break;
	}
	return arr[i];
}

void checkPrimes(int arr[],int s){
	// implement seive of eratosthenes
	// primes among : +2 to max elem of arr[]
	int i,j, seiveSize = arr[s-1]+1 , prev;
	int* seive=(int*)calloc(seiveSize,sizeof(int));

	for(i = 2 ; i < seiveSize ; i++){
		seive[i]=1; // initially : all nos are prime
	}
	// create seive : check elem , if prime > mark multiples false
	for(i = 2 ; i < seiveSize ; i++){
		if(seive[i]==1)
			for(j = 2*i ; j < seiveSize ; j = j + i) seive[j]=0;
	}
	printf("\n The primes are : ");
	for(i = 0 ; i < s ; i++){
		if(i==0 ){
			if(seive[arr[i]]==1) printf("%d ",arr[i]); // seems ok ...
			prev = arr[i];
		}
		else if(seive[arr[i]]==1 && seive[arr[i]]!=prev){
			printf("%d ",arr[i]);
			prev = arr[i];
		}
	}
	printf("\n");
}

void display(int arr[], int s){
	int i;
	for(i = 0; i < s ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(void){
	int arr[100], newArr[102], size = 0 , count = 0 , i = 0 , h2 = 0;// count = num of negatives 
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter the array elements : \n");
	
	// reading array
	for(i = 0; i < size ; i++) scanf("%d", &arr[i]);
	
	// displaying the array
	printf("Entered array : \n");
	display(arr,size);
	
	// sorting the array 
	mySort(arr,size);
	
	// count negatives
	count = countNegatives(arr,size);
	
	// updating the array
	if(count > 0){
		newArr[0] = -1;
		newArr[1] = count;
		for(i = 2 ; i < size + 2 ; i++){ // to accomodate the extra two values 
		newArr[i] = arr[i-2];
		}
		// print the final thing
		display(newArr,size+2);
	}
	else{
		for(i = 0 ; i < size ; i++){ // to accomodate the extra two values 
			newArr[i] = arr[i];
		}
		// print the final thing
		display(newArr,size);
	}
	
	// get second highest and primes
	if(count > 0) h2 = secondHighest(newArr,size+2);
	else h2 = secondHighest(newArr,size);
	printf("second highest : %d", h2);	
	
	// primes should be checked with original array
	// as newArray might include a count for negative values
	// which in turn might be a prime .
	checkPrimes(arr,size);
	getch();// only because of Turbo-C
	clrscr();// only because of Turbo-C
	return 0;
}

