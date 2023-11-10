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

Write Source Cofe to Swap Two Numbers without temp variable

*/

void main(){
	float a =0 ,b=0 , temp=0 ;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a );
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b );
	//first way 
	a = a * b ;
	b = a / b ;
	a = a / b ;
	printf("first swap >> a = %f  & b = %f \n" ,a , b );
	//Second Way
	a = a + b ;
	b = a - b ;
	a = a  - b ;
	printf("second swap >> az = %f  & b = %f \n" ,a , b );
	/*third Way works only with integar values 
	a = a ^ b ;
	b = a ^ b ;
	a = a  ^ b ;
	printf("Third swap >> a = %f  & b = %f \n" ,a , b );*/
}