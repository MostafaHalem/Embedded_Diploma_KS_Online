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
8)C function to take an array and reverse its elements?   test case 1:
input: int a[5]={1,2,3,4,5}; output:5 4 3 2 1.
*/
void reverse(uint32[5]);
void main(){
	uint32 a[5]={1,2,3,4,5}; 
	reverse(a);
}

void reverse (uint32 arr[]){
	uint32 temp , i ;
	printf("output:");
	for(i = 0 ; i < 3 ; i++){
		temp =	arr[i];
		arr[i] = arr[4-i] ;
		arr[4-i]= temp ;
	}
	
	for(i = 0 ; i < 5 ; i++){
	printf("%d " , arr[i]);
	}
} 