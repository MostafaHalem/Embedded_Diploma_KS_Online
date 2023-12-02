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
writ c program to find prime numbers between two intervals
by making user-defined function 
*/

uint8 Check(uint16 i);
void main(){
	uint32 FirstNumber , SecondNumber , i , CheckedValue ;
	printf("Enter two numbers (intervals) : ");
	scanf("%d %d" , &FirstNumber , &SecondNumber );
	/* validation check for numbers must be bigger positive and second must be 
	bigger than the first 
	*/
	if((FirstNumber >= 0) && (SecondNumber >= 0) && (FirstNumber < SecondNumber)){ 
		printf("prime numbers between %d and %d are : ", FirstNumber , SecondNumber );
		for(i = FirstNumber ; i <= SecondNumber ; i++){ // loop to call the function 
			CheckedValue= Check(i);
			if(0 == CheckedValue){
				printf("%d ", i);

			}
		} 
	}
	else{
		printf("Error !!! enter positve value or seconde value must be bigger than the first");
	}
}
// fucntion to check on the number if it is prime or not  
uint8 Check(uint32 i){
	uint16 j , flag =0 ;
	for(j=2 ; j<= i/2 ; j++){
		if(i%j == 0){
			flag =1 ;
			break;
		}
	}
	return flag ;
}