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
write c program to find the frequency of characters in a string
*/

void main(){
	uint8 arr[1000]={0}  ;
	uint32 i, count = 0 ; 
	printf("Enter the string: ");
	gets(arr);
	
	for(i=0 ; arr[i] !='\0' ; i++){	//loop to search the Char 
		count++; 
		}
	printf("length of string %d ", count );

}
