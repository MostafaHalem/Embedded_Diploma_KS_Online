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
function to take a number and sum all digits?       
test case 1: input:123 ->output:6 
test case 2: input:4565 ->output:20                                                                                                                                                                                                   
########################### */
uint32 output(uint32);
void main(){
	uint32 input = 0 ; 
	uint32 sum = 0 ;
	printf("Enter the sum numbers = "); 
	scanf("%d" , &input);
	sum = output(input); 
	printf("output = %d" , sum);
	
}
uint32 output(uint32 x ){
uint32 increment , i , arr[10]={0} , sum  ;
	for(i = 0 , increment =1 ; i < 10 ; i++){
		arr[i] = (( x / increment ) %10 ) ;
		increment*= 10 ;
	}
	for(i = 0 ; i < 10 ; i++){
		sum += arr[i]; 
	}
	return sum ;
}