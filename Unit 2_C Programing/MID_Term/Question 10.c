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
10)c function to count the max number of ones between two zeros?
test case 1:
input:14(01110)  output:3.
test case 2:
input:110(0110 1110).
output: 3
*/
uint8 counter (uint32 Number);
void main (){
	uint32 Number , NumberOfOnes ;
	printf("Please enter number \n");
	scanf("%d",&Number); 
	NumberOfOnes = counter(Number);
	printf("The number of ones = %d  \n" , NumberOfOnes);
}
uint8 counter (uint32 Number){
	uint8	Mask , i , NumberOfOnes = 0 , Ones = 0 ;
	for (i = 0 ; i < 32 ; i++){ 
		Mask = (Number >> i) & 1 ; 
		if (Mask == 0){  		
			if(NumberOfOnes < Ones ){  
			NumberOfOnes = Ones ;
			}
			Ones = 0;		
		} 
		else { 
			Ones++ ; 
		}
	Mask = 0 ;
	}
	return NumberOfOnes;
}
