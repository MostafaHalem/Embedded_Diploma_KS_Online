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
7)c function to sum numbers from 1 to 100(without loop)?
*/
uint32 sum(uint32);
void main(){
	uint32 number ; 
	number = sum(100);
	printf("%d" , number);
}

uint32 sum (uint32 i ){
	static uint32 x ;
	if(i > 0){
		sum(i-1);
		x+=i; 
	}
	return x ;
} 