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
■ Q5:
 Write a program in C to show a pointer to an array which contents 
are pointer to structure. 
Expected Output :
 Exmployee Name : Alex                                                                                        
Employee ID :  1002
*/
struct data {
	uint8 Name[100];
	uint32 ID;
}typedef data ; 
void main(){
	data Employee = {"Alex" , 1002};
	data *PTR ; 
	PTR = &Employee ; 
	printf("Exmployee Name : %s\n" , PTR->Name);
	printf("Employee ID :%d" , PTR->ID);
	
}
