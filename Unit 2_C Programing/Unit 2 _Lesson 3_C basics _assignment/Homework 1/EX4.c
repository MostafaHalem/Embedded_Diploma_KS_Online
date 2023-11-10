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
Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
*/

void main(){
	float x =0 , y=0 ;
	printf("Enter two integer:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &x , &y);
	printf("product: %0.4f \n", x*y );
}