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
writ c program to find sum of 2 matrix of order 2*2 using
using multidimensional array where element of matrix are 
entered by user 
*/

void main(){
	float first_matrix[2][2]= {0};
	float Second_matrix[2][2]= {0};
	float sum_matrix[2][2]= {0};
	uint8 i , j ;
	printf("Enter first matrix\n");
	fflush(stdin); fflush(stdout);
	for(i=0 ; i<2 ; i++){ //loop to take from user first matrix 
		for(j=0 ; j <2 ; j++){
		printf("Enter a%d%d ",(i+1),(j+1));	
		scanf("%f", &first_matrix[i][j] );
		}
	}
	fflush(stdin); fflush(stdout);
	printf("Enter the second matrix \n");
	for(i=0 ; i<2 ; i++){//loop to take from user secone matrix 
		for(j=0 ; j <2 ; j++){
		printf("Enter a%d%d ",(i+1),(j+1));
		scanf("%f", &Second_matrix[i][j] );
		}
	}
	printf("The sum of matrix is \n");
	for(i=0 ; i<2 ; i++){ // loop to sum 2 matrices
		for(j=0 ; j <2 ; j++){
			sum_matrix[i][j]= first_matrix[i][j] + Second_matrix[i][j];
			printf("%0.2f\t",sum_matrix[i][j]);
		}
		printf("\n");
	}
}
