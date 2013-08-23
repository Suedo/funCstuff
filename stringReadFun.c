/* 
	this is a simple program to demonstrate how to use fgets/sscanf to read character based io from stdin
	inspiration : 
	http://www.daniweb.com/software-development/c/threads/461567/replacing-a-character-with-another-character-in-given-string
*/

#include<stdio.h>
void strreplace(char s[],char,char);
char readChar(void);
int main()
{
    char s[10],chr,repl_chr;
	char temp [10];
    printf("\nEnter a string: ");
    fgets(s,sizeof(temp),stdin); // note : the '\0' is accounted for in the sizeof(temp) part
	
    printf("\nEnter character to be replaced: ");
    chr = readChar();
    printf("\nEnter replacement character: ");
    repl_chr = readChar();
    printf("\nModified string after replacement is: ");
    strreplace(s,chr,repl_chr);
   return 0;  
}

void strreplace(char s[], char chr, char repl_chr)
{
     int i=0;
     while(s[i]!='\0' && s[i]!= '\n')
     {
           if(s[i]==chr)
           {
               s[i]=repl_chr;
           }  
           i++; 
     }
          printf("%s",s);
}
char readChar(){
	char chr;
	char temp[3];
	fgets(temp,sizeof(temp),stdin); // 3 blocks : actual char , '\n' , '\0'
	sscanf(temp , "%c" , &chr);
	return chr;
}