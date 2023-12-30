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
EX2: C program to add two distances (in inch-feet) system using 
structures 
*/
struct distance { //structre of  the data 
	float feet ;
	float inch ;
};
void main(){
	struct distance D1 , D2 , sum ;
	printf("Enter information for 1st distance \n");
	printf("Enter feet :");
	scanf("%f" , &D1.feet);
	printf("Enter inch :");
	scanf("%f" , &D1.inch);
	
	printf("\n");
	printf("Enter information for 2nd distance \n");
	printf("Enter feet :");
	scanf("%f" , &D2.feet);
	printf("Enter inch :");
	scanf("%f" , &D2.inch);
	
	sum.inch = D1.inch + D2.inch ;
	/*
		loop to convert every 12 inch into foot 
	*/
	while(sum.inch > 12){
		sum.inch -=12;
		D1.feet++;
	}
	sum.feet= D1.feet + D2.feet ; 
	printf("Sum of distances = %0.2f'  %0.2f\"",sum.feet , sum.inch);
		
}
