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
■ Q1:
 Write a program in C to demonstrate how to handle the pointers 
 in the program. 
Expected Output :
 Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
Now ab is assigned with the address of m.                                                                    
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 29                                                                                   
The value of m assigned to 34 now.                                                                           
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 34                                                                                   
The pointer variable ab is assigned with the 
value 7 now.                                                    
Address of m : 0x7ffcc3ad291c                                                                                
Value of m : 7
*/

void main(){
	uint8 m =29 ; 
	uint8 *ab;
	printf("Address of m : 0x%p \n" , &m);
	printf("value of m : %d \n" , m );
	ab=&m ;
	printf("Address of ab : 0x%p \n" , ab );
	printf("value of ab : %d \n" , *ab );
	m=34; 
	printf("Address of m : 0x%p \n" , &m);
	printf("value of m : %d \n" , m );
	*ab=7;
	printf("Address of m : 0x%p \n" , &m);
	printf("value of m : %d \n" , m );
}
