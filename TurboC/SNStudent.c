/*

Write a program to read in a collection of student’s exam scores ranging in value from 0 to 100.
The program should count and print the number of 
A's (90 to 100), B's (70 to 89), C's (50 to 69), D's (35 to 49) and F's (0 to 34).
The program should also print each score and its letter grade.
Use the following test data:
64 74 71 71 79 67 80 63 0 90 89 43 59 99 82 12 100 75.

*/

#include <stdio.h>
#include <conio.h>

void grade(int arr[],int s){
	int i,a=0,b=0,c=0,d=0,f=0;
	printf("marks obtained by students : \n");
	for(i=0 ; i < s ; i++){
		printf("Student%3d > ",i);
	
		if(arr[i]>=90) { printf("Marks : %3d , Letter Grade : %c\n",arr[i],'A'); a++; }
		else if(arr[i]>=70) { printf("Marks : %3d , Letter Grade : %c\n",arr[i],'B'); b++; }
		else if(arr[i]>=50) { printf("Marks : %3d , Letter Grade : %c\n",arr[i],'C'); c++; }
		else if(arr[i]>=35) { printf("Marks : %3d , Letter Grade : %c\n",arr[i],'D'); d++; }
		else { printf("Marks : %3d , Letter Grade : %c\n",arr[i],'F'); f++; }
	}
	printf("\n");
	printf("\nA's : %d \nB's : %d \nC's : %d \nD's : %d \nF's : %d \n",a,b,c,d,f);
}

int main(void){
	int marks[18] = { 64, 74, 71, 71, 79, 67, 80, 63, 0, 90, 89, 43, 59, 99, 82, 12, 100, 75};
	int i;

	printf("original array : ");
	for(i=0 ; i < 18 ; i++) printf("%d ",marks[i]);
	printf("\n");

	grade(marks,18);
	getch(); clrscr() ; return 0;

}