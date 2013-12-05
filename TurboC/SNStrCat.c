/*
Write a program to concatenate two strings manually
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // for calloc
#define MAXLENGTH 102 // maximum length of string (including terminating '\n' and '\0')

char* trim(char str[]){
	int i,j;
	char* newStr;
	for(i = 0 ; str[i]!='\n' ; i++) {} // do nothing
	str[i] = '\0'; // replace '\n' with '\0'
	//char newStr[i+1];
	newStr = (char*)calloc(i+1,sizeof(char));
	for(j = 0 ; j < i+1 ; j++){
		newStr[j]=str[j];
	}
	return newStr;
}
int length(char* str){
	int i;
	for(i=0 ; str[i]!='\0'; i++){
		// do nothing
	}
	i++; // '\0' is also a part of any c string
	return i;
}
void myConcat(char* str1,char* str2){
	int l1,l2,index,i,catlen;
	char* str3;
	l1 = length(str1);
	l2 = length(str2);
	catlen = l1 + l2 - 1; // no need for two '\0's
	str3 = (char*)calloc(catlen,sizeof(char));
	index=0;
	for(i=0;str1[i]!='\0';i++){
		str3[index]=str1[i];
		index++;
	}
	for(i=0;str2[i]!='\0';i++){
		str3[index]=str2[i];
		index++;
	}
	str3[index]='\0';
	printf("\n\nconcat string : %s",str3);

}

int main(void){
	int l1,l2,i,j, catLen;
	char str1[102],str2[102];
	char* s1;
	char* s2;

	printf("Enter 1st string (max 100 characters) : ");
	fgets(str1,MAXLENGTH,stdin);
	s1 = trim(str1);

	printf("Enter 2nd string (max 100 characters) : ");
	fgets(str2,MAXLENGTH,stdin);
	s2 = trim(str2);
	
	l1 = length(s1);
	l2 = length(s2);
	catLen = l1 + l2 - 1;
	printf("l1 : %d , l2 : %d , catLen: %d\n",l1,l2,catLen);
	printf("s1: %s \ns2: %s\n",s1,s2);
	myConcat(s1,s2);
	getch();
	clrscr();
	return 0;
}