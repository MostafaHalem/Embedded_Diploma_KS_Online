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
write c program to searcn an element in array
*/

void main(){
	uint32 arr[100]={0} , Search , Number_Of_Data , i , flag = 0; 
	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Number_Of_Data );
	if(Number_Of_Data<0 || Number_Of_Data > 100){    //validaion of the range 
		printf("!!! Error number of data should be in range 0->100");
	}
	else{
		printf("Enter the elements \n");
		for(i=0 ; i<Number_Of_Data ; i++){	//loop to take elements from user 
			fflush(stdin); fflush(stdout);
			scanf("%d", &arr[i] );
		}
		
		printf("Enter the element to be Searched : ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &Search);
		for(i=0 ; i<Number_Of_Data ; i++){	//loop to search the element 
			if(arr[i] == Search){  //condition if element found 
				printf("Number found at the location = %d" , (i+1));
				flag = 1;
				break ;
				}
			
			}
			if(0==flag){ //condition if element not found 
			printf("Number isn't at exist at the array ");
		}
	}
}
