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
Write C Program to check whether a number is
positive or negative 
########################### */

void main(){
	float x  ;
	printf("Enter the numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x );
	if( x > 0   ){   //condition to check first and second number 
		
		if ( 0 == x){ //condition to check first and third number 
			printf("you have entered 0" , x);
		}
		else{
			printf("The number %0.2f is positive" ,x);
		}
	}
	else {
		printf("The number %0.2f is negative " , x);
	}
	
}