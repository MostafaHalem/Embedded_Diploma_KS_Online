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
#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################

*/

void main(){
	float a =0 ,b=0 , temp=0 ;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a );
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b );
	temp = a ;
	a= b ;
	b= temp ;
	printf("After swapping, value of a = %0.4f \n" , a);
	printf("After swapping, value of b = %0.4f \n" , b);

}