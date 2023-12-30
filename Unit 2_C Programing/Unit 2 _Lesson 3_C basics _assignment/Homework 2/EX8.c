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
Write C Program to Make simple calculator 
########################### */

void main(){
	float x , y ;
	uint8 operation ;
	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &x , &y );
	printf("Enter operation either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operation );
	switch (operation){
		case '+' : printf("%0.3f %c %0.3f = %0.3f" , x , operation , y , x+y); 
		break ;
		case '-' : printf("%0.3f %c %0.3f = %0.3f" , x , operation , y , x-y); 
		break ;
		case '*' : printf("%0.3f %c %0.3f = %0.3f" , x , operation , y , x*y); 
		break ;
		case '/' : 
		if( 0 == y  ){
			printf("Erorr !! Can't devide 0");
			break ;
		}
		else{
			 printf("%0.3f %c %0.3f = %0.3f" , x , operation , y , x/y ); 
		break ;
		} 
		default : printf("Erorr !! wrong operation entry"); 
		break ; 
	}
	
}