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

5)c function to count number of ones in binary number?
test case 1:
input:5 ->output: 2 --->binary of 5 is 0101 so has 2 one's  
test case 2:  input:15 ->output:4                                                                                                                                                                                            
*/
uint32 Count(uint32 );
void main(){
	uint32 Number , NumberOfOnes;
	printf("Inpur : ");
	scanf("%d" , &Number);
	NumberOfOnes=Count(Number);
	printf("output -> %d ", NumberOfOnes);
}

uint32 Count (uint32 num){
	uint8 i , check = 0 , counter = 0 ; 
	for(i=0 ; i < 32; i++){
		check = ((num >> i )&1);
		if(1 == check ){
			counter ++; 
			check = 0;
		}
	} 
	return counter ;
} 