/*
 Write a function to return the biggest element from an integer array.
*/
#include <stdio.h>

int largest(int arr[],int s){
	int max = 0, i;
	for(i=0; i < s ; i++) if(arr[i] > max) max = arr[i];
	return max;
}

int main(void){
	int arr[10] = {5,6,9,81,7,5,12,45,6,68};
	int i,l;
	printf("array : ");
	for(i=0; i<10 ; i++) printf("%d ",arr[i]);
	l = largest(arr,10);
	printf("\n\nlargest elem in above array : %d",l);
	return 0;
}