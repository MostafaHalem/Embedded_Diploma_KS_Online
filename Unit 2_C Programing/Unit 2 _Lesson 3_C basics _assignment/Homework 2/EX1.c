#include <stdio.h>

typedef unsigned char        uint8  ; 
typedef unsigned short       uint16 ; 
typedef unsigned long        uint32 ; 
typedef unsigned long long   uint64 ; 

typedef signed char          int8  ; 
typedef signed short         int16 ; 
typedef signed long          int32 ; 
typedef signed long long     int64 ; 
 
/*
Write C Program to check whether a number 
is odd or even
########################### */

void main(){
	uint16 ScannedNumber ;
	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &ScannedNumber);
	if(ScannedNumber %2 == 0){ //checking number if it can be divided on 2
		printf("The number %d is Even", ScannedNumber);
	}
	else {
		printf("The number %d is Odd", ScannedNumber);
	}
}