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
 Write a program in C to print all the alphabets using a pointer. Go 
to the editor
 Expected Output :
 The Alphabets are :                                                                                         
Expected Output 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

void main(){
	uint8 Alphabets[27]={0} , i ; 
	uint8 *PTR;
	 
	PTR = Alphabets;
	for(i=0 ; i < 26 ; i++){
		*PTR = i +'A'; 
		PTR++ ;
	}
	printf("The Alphabets are : \n");
	
	PTR = Alphabets;
	for(i=0 ; i < 26 ; i++){
		printf("%c" , *PTR);
		printf(" ");
		PTR++ ;
	}
	
}
