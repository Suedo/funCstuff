#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t startm, stopm;
#define START if ( (startm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define STOP if ( (stopm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define PRINTTIME printf( "%6.3f seconds used by the processor.", ((double)stopm-startm)/CLOCKS_PER_SEC);
int main(void){
    long int i = 0, y =0 , x = 79832541; // x  = a very big odd number
    clock_t startTime,stopTime;
    printf("\nstarting bitwise method :");
	START;
	for(i = 0 ; i < 50000 ; i++){
        if(x&1) y=1;
    }
    STOP;
	PRINTTIME;
	
    y=0;
	printf("\nstarting mul-div method :");
	START;	
    for(i = 0; i < 50000 ; i++){
        if(((x/2)*2) != x ) y=1;
    }
	STOP;
	PRINTTIME;
    return 0;
}

/*
#include <time.h>
clock_t startm, stopm;
#define START if ( (startm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define STOP if ( (stopm = clock()) == -1) {printf("Error calling clock");exit(1);}
#define PRINTTIME printf( "%6.3f seconds used by the processor.", ((double)stopm-startm)/CLOCKS_PER_SEC);
*/