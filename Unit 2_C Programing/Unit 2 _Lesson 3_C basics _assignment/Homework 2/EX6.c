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
Write C Program to calculate sum of natural numbers 
########################### */

void main(){
	uint32 x = 0 , sum = 0 ,i =1 ;
	printf("Enter an int  : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x );
	for( i = 1 ;i <= x ; i++ ){
		sum += i ;
	}
	printf("sum = %d ", sum);
	
}