#include <stdio.h>

typedef unsigned char        uint8  ; 
typedef unsigned short       uint16 ; 
typedef unsigned long        uint32 ; 
typedef unsigned long long   uint64 ; 

typedef signed char          int8  ; 
typedef signed short         int16 ; 
typedef signed long          int32 ; 
typedef signed long long     int64 ; 
/* Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
*/

void main(){
	uint16 x =0 ;
	printf("Enter A integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d \n", x);
}