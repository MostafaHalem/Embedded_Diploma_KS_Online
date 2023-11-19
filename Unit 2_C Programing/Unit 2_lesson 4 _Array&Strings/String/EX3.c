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
write c program to reverse string
*/

void main(){
	uint8 arr[100]={0} , temp ;
	uint32 i, count = 0  ; 
	printf("Enter the string: ");
	gets(arr);
	
	for(i=0 ; arr[i] !='\0' ; i++){	//loop to search the Char 
		count++; 
		}
	for(i=0 ; i < count/2 ; i++){
		temp = arr[i];
		arr[i]=arr[count-i-1];
		arr[count-i-1] = temp ;
	}
	printf("reverse string is %s ", arr );

}
