/*
 Write a program to find the length of the string without any string functions
*/

#include <stdio.h>
#include <conio.h>

int length(char str[]){
	int i;
	for(i=0; str[i]!='\0';i++){} // do nothing
	i++;
	return i;
}

int main(void){
	int i,len;
	char str[102];
	printf("enter a string (max 100 chars) : ");
	fgets(str,101,stdin);
	for(i=0;str[i]!='\n';i++){} // do nothing
	str[i]='\0';
	len = length(str);
	printf("length of \"%s\" is : %d",str,len);
	getch(); clrscr(); return 0;
}