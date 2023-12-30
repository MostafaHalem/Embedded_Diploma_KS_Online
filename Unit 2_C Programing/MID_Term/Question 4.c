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
4)c function to revers digits in number? 
test case 1:
input:2457 ->output:7542 
test case 2:
input:1057 ->output:7501.
*/
void reverse(uint32 );
void main(){
	uint32 Number ;
	printf("Inpur : ");
	scanf("%d" , &Number);
	reverse(Number);
	
}

void reverse (uint32 num){
	uint32 REVnumber = 0 ;
	printf("outpur -> ");
	while ( num != 0 ){
		REVnumber = num%10 ;
		num= num/10;
		printf("%d" , REVnumber);
	}
	
} 