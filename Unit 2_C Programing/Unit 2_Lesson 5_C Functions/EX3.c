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
writ c program to Reverse a sentence using recrusion of function
*/

void Reverse(void);
void main(){
	printf("Enter a sentence : ");
	Reverse();
}

// fucntion to Reverse using recursion   
void Reverse(void){
	uint8 c ;
	scanf("%c" ,  &c);
	if(c != '\n'){
		Reverse();
		printf("%c" , c );
	}

}