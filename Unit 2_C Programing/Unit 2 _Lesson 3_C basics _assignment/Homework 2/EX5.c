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
Write C Program to check whether a character is an alphabet or not 
########################### */

void main(){
	uint8 x  ;
	printf("Enter a character  : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x );
	if( (x >='a' && x<='z') || ( x >='A' && x <= 'Z') ){   //condition to is it alphabet or not 
		printf("%c is alphabet" , x);
	}
	else {
		printf("%c is not alphabet" , x);
	}
	
}