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
writ c program calculate the factorial of number using recrusion of function
*/

uint32 Factorial(uint32 Number);
void main(){
	uint32 Number  ;
	printf("Enter positive interger : ");
	scanf("%d" , &Number );
	/* validation check if number is positive 
	*/
	if(Number >= 0){ 
		printf("Factorial of %d = %d ", Number, Factorial(Number));
		
	}
	else{
		printf("Error !!! enter positve value ");
	}
}
// fucntion to calculte factorial using recursion   
uint32 Factorial(uint32 i){
	if(i != 1)
	return i*Factorial(i-1) ;
}