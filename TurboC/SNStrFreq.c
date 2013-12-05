/*
 Write a program to find the occurrence and the frequency of a given character.
*/
#include <stdio.h>
#include <conio.h>

char* trim(char str[]){
	int i,j;
	char* newStr;
	for(i = 0 ; str[i]!='\n' ; i++) {} // do nothing
	str[i] = '\0'; // replace '\n' with '\0'
	newStr = (char*)calloc(i+1,sizeof(char));
	for(j = 0 ; j < i+1 ; j++){
		newStr[j]=str[j];
	}
	return newStr;
}

int freqCounter(char* str,char query){
	int i , count = 0;
	for(i=0 ; str[i]!='\0'; i++) if(str[i]==query) count++;
	return count;
}

int main(void){
	int i; char str[102] , query; 
	printf("Enter string (max 100 chars): ");
	fgets(str,100,stdin);
	printf("entered string : %s \n",str);
	printf("enter char to search for : ");
	query = getchar();
	printf("number of %c's in \"%s\" is %d",query,trim(str),freqCounter(str,query));
	getch();
	clrscr(); return 0;
}