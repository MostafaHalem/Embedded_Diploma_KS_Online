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
EX1: C Program to store information(name , roll and marks) of 
a student using structre 
*/
struct data { //structre of  the data 
	uint8 name[100]; 
	uint16 roll ;
	float marks; 
}x; // define structre with x
void main(){
	printf("Enter information of students : \n");
	printf("Enter name : ");
	gets(x.name); 
	printf("Enter roll number : ");
	scanf("%d" , &x.roll);
	printf("Enter marks : ");
	scanf("%f" , &x.marks);
	printf("\n");
	printf("Displaying information : \n");
	printf("Name: %s \nRoll: %d \nMarks: %0.2f",x.name ,x.roll ,x.marks);
	
}
