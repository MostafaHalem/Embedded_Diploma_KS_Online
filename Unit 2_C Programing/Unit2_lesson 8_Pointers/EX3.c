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
■ Q3:
 Write a program in C to print a string in reverse using a pointer
 The Alphabets are :                                                                                         
Test Data :
 Input a string : w3resource
 Expected Output :
 Pointer : Print a string in reverse order :                                                                  -----------------------------------------------
Input a string : w3resource                                                                                  
Reverse of the string is : ecruoser3w
*/

void main(){
	uint8 arr[30]={0}  ;
	int8 i;
	uint8 *PTR;
	printf("input string :"); 
	gets(arr);
	for(i = 0 ; arr[i]!='\0'; i++);
	
	PTR = &arr[i];
	printf("Reverse of string is : ");
	for(; i >= 0 ; i--){
		printf("%c" , *PTR);
		PTR-- ;
	}
	
}
