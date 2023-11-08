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
Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################
*/

void main(){
	uint32 x =0 , y=0 ;
	printf("Enter two integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x , &y);
	printf("Sum: %d \n", x+y );
}