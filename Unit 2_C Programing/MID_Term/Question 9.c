#include <stdio.h>
#include <string.h>

typedef unsigned char        uint8  ; 
typedef unsigned short       uint16 ; 
typedef unsigned long        uint32 ; 
typedef unsigned long long   uint64 ; 

typedef signed char          int8  ; 
typedef signed short         int16 ; 
typedef signed long          int32 ; 
typedef signed long long     int64 ; 

/*
9)C function to reverse words in string?
test case :
input: mohamed gamal. output:gamal mohamed.
*/
void reverse(uint8[100],uint8 );
void main(){
	uint8 a[100]={0} , i ;
	printf("input: ");
	gets(a);
	for(i=0 ; a[i] !='\0' ; i++);
	reverse(a , i);
}

void reverse (uint8 arr[100] , uint8 size){
	uint8 arr1[50]={0} , arr2[50]={0} , i ,j ;
	for(i=0 ; i < size ; i++){
		if(arr[i] == ' '){
			break;
		}
		else {
			arr1[i] = arr[i];
		}
	}
	
	for(j=0 ; i<size ; j++ , i++){
		arr2[j]= arr[i+1];
	}
	strcat(arr2 , " ");
	strcat(arr2 , arr1);
	printf("output : %s",arr2 );
} 