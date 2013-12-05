/*
 Write a program to search a given number from the array of n Numbers
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){

	int i,n, query; 
	int* arr;
	
	printf("enter number of numbers : ");
	scanf("%d",&n);
	arr = (int*) calloc (n,sizeof(int));
	
	printf("Enter %d numbers : \n",n);
	// populate the array
	for(i=0 ; i < n ; i++){
		printf("> ");scanf("%d",&arr[i]);
	}
	printf("\n entered array : ");
	for(i=0 ; i < n ; i++) printf("%d ",arr[i]);
	printf("\n");

	printf("enter query : ");
	scanf("%d",&query);	

	
	// for small arrays , liner search is sufficient
	for(i=0;i<n;i++){
		if(arr[i]==query) { 
			printf("found %d at %d'th location\n",query,i); 
			break;
		}
	}
	getch();
	//clrscr(); // works with turbo C only , compiling this at home on gcc
	return 0;
}
