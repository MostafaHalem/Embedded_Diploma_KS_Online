#include <stdio.h>
#include <math.h>

typedef unsigned char        uint8  ; 
typedef unsigned short       uint16 ; 
typedef unsigned long        uint32 ; 
typedef unsigned long long   uint64 ; 

typedef signed char          int8  ; 
typedef signed short         int16 ; 
typedef signed long          int32 ; 
typedef signed long long     int64 ; 
 
/*
function to take an integer number and calculate it's square root?
test case 1: 
input:4 ->output:2.000
test case 2:
input :10 ->output:3.126                                                                                                                                                                                                
########################### */
float output(float);
void main(){
	float input , square= 0 ;
	printf("input = "); 
	scanf("%f" , &input);
	square= output(input); 
	printf("output = %0.4f" , square );
	
}
float output(float x ){
	
	return sqrt(x);
}