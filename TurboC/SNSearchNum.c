/*
 Write a program to search a given number from the array of n Numbers
*/
#include <stdio.h>
#include <conio.h>

int main(void){
	int i;n; int arr[20] , query; 
	
	printf("enter number of numbers : ");
	scanf("%d",&n);

	printf("Enter numbers(max 20): ");
	// populate the array
	for(i=0 ; i < n ; i++) scanf("%d",arr[i]);

	printf("enter query : ");
	scanf("%d",&query);	

	
	// for small arrays , liner search is sufficient
	for(i=0;i<n;i++) if(arr[i]==query) { printf("found %d at %d'th location\n",query,i); break; }
	
	getch();
	clrscr(); return 0;
}
