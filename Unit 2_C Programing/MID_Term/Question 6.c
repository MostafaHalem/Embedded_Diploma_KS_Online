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

6)c function to return unique number in array with one loop?
test case 1:
input:  int a[7]={4,2,5,2,5,7,4}; output:7.
test case 2: input: int a[3]={4,2,4};    output:2
*/
uint32 Check(uint32* , uint32);
void main(){
	uint32 arr1[]={4,2,4} , unique , size;
	uint32 arr2[]={4,2,5,2,5,7,4} ;
	size = sizeof(arr1)/sizeof(arr1[1]);
	unique=Check(&arr1 , size);
	printf("output 1 -> %d \n", unique);
	size = sizeof(arr2)/sizeof(arr2[1]);
	unique=Check(&arr2 , size);
	printf("output 2 -> %d ", unique);
}

uint32 Check (uint32 *arr , uint32 size){
	uint8 unique_value, i ; 
	for (i=0 ; i < size ; i++){
		unique_value ^= arr[i]; 
	}
	return unique_value ;
} 