/*
  Write a program to find sum of diagonal elements of matrix.
*/


#include <stdio.h>
#include <conio.h>

int main(void){
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j,sum=0;
	printf("working array : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	// leading diagonal
	for(i=0,j=0 ; i<3 ; i++,j++){
		sum = sum + arr[i][j];
	}
	// off diagonal
	for(i=2,j=2 ; i>=0 ; i--,j--){
		sum = sum + arr[i][j];
	}
	printf("sum of diagonal elems : %d" , sum);
	getch();
	clrscr();
	return 0;

}