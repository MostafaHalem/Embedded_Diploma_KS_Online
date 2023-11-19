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
writ c program to calculate avrage using arrays  
*/

void main(){
	float matrix[100]= {0};
	float Average =0 ;
	uint8 i =0 , Number_Of_Data =0 ;
	printf("Enter number of data :");
	
	fflush(stdin); fflush(stdout);
	scanf("%d", &Number_Of_Data );
	if(Number_Of_Data<0 || Number_Of_Data> 100){    //validaion of the range 
		printf("!!! Error number of data should be in range 0->100")
	}
	else{
		printf("Enter the data  \n");
	fflush(stdin); fflush(stdout);
	for(i=0 ; i<Number_Of_Data ; i++){            // loop to store and sum elements 
		printf("Enter data number %d : ", i+1 );
		scanf("%f", &matrix[i] );
		Average +=matrix[i];
		}
		
	printf("The Average of data is %0.2f\n", (Average/Number_Of_Data));
	}
	
}
