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
EX2: C program to add two complex numbers by passing structure to funtction 
*/
struct number { //structre of  the data 
	float real ;
	float imgn ;
}typedef number;
number sum ( number N1, number N2 );
void main(){
	number N1 , N2 , add ;
	printf("for 1st complex number \n");
	printf("Enter real number :");
	scanf("%f" , &N1.real);
	printf("Enter imaginary number :");
	scanf("%f" , &N1.imgn);
	
	printf("for 2nd complex number \n");
	printf("Enter real number :");
	scanf("%f" , &N2.real);
	printf("Enter imaginary number :");
	scanf("%f" , &N2.imgn);
	add =sum(N1 , N2);
	printf("Sum = %0.2f + %0.2fi" , add.real ,add.imgn);
}
number sum ( number N1, number N2 ){
	number add ;
	add.real = N1.real + N2.real;
	add.imgn = N1.imgn + N2.imgn;
	return add ;
}
