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
write c program to find transpose of matrix
*/

void main(){
	float matrix[10][10];
	float trans_matrix[10][10];
	uint32 i =0 , j =0 ,Rows ,Column ;
	printf("Enter number of Rows :");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Rows );
	
	printf("Enter number of Column :");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Column );

	if((Rows>10) || (Column>10) || (Column == 0) || (Rows == 0)){
		printf("!!Error range of Column & rows 1 -> 10 ");
	}
	else{
		printf("Enter the matrix \n");
	for(i=0 ; i<Rows ; i++){	//loop to take from user matrix 
		for(j=0 ; j <Column ; j++){
		printf("Enter a%d%d ",(i+1),(j+1));
		fflush(stdin); fflush(stdout);
		scanf("%f", &matrix[i][j] );
		}
	}
	
	printf("The Entered matrix \n");
	for(i=0 ; i<Rows ; i++){	//loop to print the entered matrix 
		for(j=0 ; j <Column ; j++){
		printf("%0.2f \t",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<Column ; i++){	//loop to Transpose matrix  
		for(j=0 ; j <Rows ; j++){
			trans_matrix[i][j]=matrix[j][i];
		}
	}
	
	printf("The Transpose matrix \n");
	for(i=0 ; i<Column ; i++){	//loop to print the Transposed matrix 
		for(j=0 ; j <Rows ; j++){
		printf("%0.2f \t",trans_matrix[i][j]);
		}
		printf("\n");
	}

	}
}
