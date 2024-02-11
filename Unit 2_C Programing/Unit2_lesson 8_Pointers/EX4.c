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
■ Q4:
 Write a program in C to print the elements of an array in reverse 
order. Test Data :
 Input the number of elements to store in the array (max 15) : 5
 Input 5 number of elements in the array :
 element - 1 : 2
 element - 2 : 3
 element - 3 : 4
 element - 4 : 5
 element - 5 : 6
 Expected Output :
 The elements of array in reverse order are :                                                                 
element - 5 : 6                                                                                              
element - 4 : 5                                                                                              
element - 3 : 4                                                                                              
element - 2 : 3                                                                                              
element - 1 : 2 
*/

void main(){
	uint8 arr[15]={0}  ;
	int8 i , n ;
	uint8 *PTR;
	printf("Input the number of elements to store in the array (max 15):");
	scanf("%d", &n);
	printf("Input %d number of elements in the array : \n" ,n );
	for(i = 0 ; i < n ; i++){
		printf("element - %d :",i + 1);
		scanf("%d" , &arr[i]);
	}
	
	PTR = &arr[i-1];
	printf("Expected Output : \n");
	printf("The elements of array in reverse order are : \n");
	
	for(; i > 0 ; i--){
		printf("element - %d : %d \n", i , *PTR);
		PTR-- ;
	}
	
}
