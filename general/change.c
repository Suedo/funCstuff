/*
  Write a function to change the account number from “11060” to “12050”  From the array. 
  11060, 2003, 2106, 52003, 11060, 87645
*/

#include <stdio.h>

void change(int* acc , int size , int a , int b){
	int i;
	for(i=0; i < size ; i++) if(acc[i] == a) { printf("1 "); acc[i] = b; }
}

int main(void){
	int accNum[6] = {11060, 2003, 2106, 52003, 11060, 87645};
	int i;
	printf("original array : ");
	for(i=0 ; i<6 ; i++) printf("%d ",accNum[i]);
	printf("\n");
	
	change(accNum,6,11066,12050);
	
	printf("changed array : ");
	for(i=0 ; i<6 ; i++) printf("%d ",accNum[i]);
	printf("\n");
	
	return 0;
}