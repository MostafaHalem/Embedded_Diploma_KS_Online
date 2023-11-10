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
Write C Program to check whether character is 
consonant or vaowel
########################### */

void main(){
	uint8 Charcter ;
	printf("Enter the character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &Charcter);
	if(Charcter=='a'||Charcter=='A'|| //condition to check the char 
	   Charcter=='e'||Charcter=='E'||
	   Charcter=='i'||Charcter=='I'||
	   Charcter=='o'||Charcter=='O' ){
		printf("%c is a vaowel \n", Charcter);
	}
	else{
		printf("%c is a Consonant \n", Charcter);
	}
}