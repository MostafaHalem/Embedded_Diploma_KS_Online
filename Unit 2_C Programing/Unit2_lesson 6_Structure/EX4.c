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
	uint8 name[50]; 
	uint16 roll ;
	float marks; 
}typedef data; 
void main(){
	data x[10];
	uint8 i ;
	printf("Enter information of students : \n");
	for(i=0 ; i <10 ;i++){
	printf("Enter roll number : ");
	scanf("%d" , &x[i].roll);
	printf("Enter name : ");
	scanf("%s" , x[i].name); 
	printf("Enter marks : ");
	scanf("%f" , &x[i].marks);
	printf("\n");
	}
	
	printf("Displaying information : \n");
	for(i=0 ; i <10 ;i++){
	printf("Roll: %d \nName: %s \nMarks: %0.2f", x[i].roll ,x[i].name ,x[i].marks);
	printf("\n\n");
	}
}
