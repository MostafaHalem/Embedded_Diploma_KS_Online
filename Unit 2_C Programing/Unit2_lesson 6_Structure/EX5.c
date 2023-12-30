#include <stdio.h>

#define AREA(X)(3.1415*(X)*(X))

typedef unsigned char        uint8  ; 
typedef unsigned short       uint16 ; 
typedef unsigned long        uint32 ; 
typedef unsigned long long   uint64 ; 

typedef signed char          int8  ; 
typedef signed short         int16 ; 
typedef signed long          int32 ; 
typedef signed long long     int64 ; 

/*
EX5: C Program to find area of a circle , passing arguments to macros 
*/

void main(){ 
	float area , R; 
	printf("Enter the radius :");
	scanf("%f", &R);	
	area = (AREA(R));
	printf("Area = %0.2f", area );
}
