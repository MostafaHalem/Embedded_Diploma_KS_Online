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
Write C Program to find largest number 
among 3 numbers 
########################### */

void main(){
	float x , y , z ;
	printf("Enter the numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &x ,&y ,&z );
	if( x >= y  ){   //condition to check first and second number 
		
		if (x >= z){ //condition to check first and third number 
			printf("Largest number is %0.2f" , x);
		}
		else{
			printf("Largest number is %0.2f" , z);
		}
	}
	else{
		if( y >= z ){ // condition to check second and third number 
			printf("Largest number is %0.2f" , y);
		}
		else{
			printf("Largest number is %0.2f" , z);
		}
	}	
}