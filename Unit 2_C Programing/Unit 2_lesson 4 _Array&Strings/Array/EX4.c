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
write c program to insert an element in array
*/

void main(){
	uint32 arr[100]={0} , Inserted_Element =0 , Location=0 , Number_Of_Data , i ; 
	printf("Enter number of elements :");
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
		
	printf("Enter the element to be inserted \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Inserted_Element );
	
	printf("Enter the location \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Location );
	if(Number_Of_Data >= Location ){ //condition to validate location 
		for(i= Number_Of_Data ; i >= Location ; i--){	//loop to free location for element 
		arr[i] = arr[i-1];
		}
		Number_Of_Data++;  
	
		arr[Location - 1] = Inserted_Element; 
		printf("The elements are : \n");
	
		for(i =0 ; i < Number_Of_Data ; i++){ //loop to print elements of array
		printf("%d " , arr[i]);
		}
	}
	else{
		printf("!!! Error Location must be less than number of element\n");
	}
	
	}
}
