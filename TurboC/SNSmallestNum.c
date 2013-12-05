/*
 Write a program to find the smallest number in the given set of numbers.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib>

int smallest(int[] arr,int s){
	int temp=0,i;
	for(i=0;i<s;i++) if(temp < arr[i]) temp = arr[i];
	return temp;
}

int main(void){
	int n,i;
	int* arr;
	printf("enter the number of numbers : ");
	scanf("%d",&n);
	arr = (int*) calloc(n, sizeof(int));
	printf("enter %d numbers: \n",n);
	for(i=0; i<n ; i++) scanf("%d",arr[i]);
	printf("\nthe entered array of ints : ")
	for(i=0; i<n ; i++) printf("%d ",arr[i]);
	printf("\n\n");
	printf("smallest elem : %d",smallest(arr,n)); // passing array and its size
	getch(); clrscr(); return 0;
}