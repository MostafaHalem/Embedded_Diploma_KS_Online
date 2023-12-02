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
writ c program calculate the power of a number using recrusion of function
*/

uint32 Power(uint32 base , uint32 number);
void main(){
	uint32 base , NumberOfPower  ;
	
	printf("Enter base number : ");
	scanf("%d" , &base );
	printf("Enter Power number : ");
	scanf("%d" , &NumberOfPower );
	/* validation check if number is positive 
	*/
	if(NumberOfPower >= 0){ 
		printf("%d ^ %d  = %d ", base, NumberOfPower , Power(base, NumberOfPower));
		
	}
	else{
		printf("Error !!! enter positve value ");
	}
}
// fucntion to calculte Power using recursion   
uint32 Power(uint32 base , uint32 number){
	if(number != 0){
	return (base* Power(base,number-1)) ;
	}
	else{
		return 1;
	}
}