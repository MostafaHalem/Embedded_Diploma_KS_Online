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
Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################

*/

void main(){
	uint32 x =0 ;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x );
	printf("ASCII Value of %c = %d \n", x,x );
}