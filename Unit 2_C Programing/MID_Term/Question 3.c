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
3)c function to print all prime numbers between two numbers? 
test case :
input:n1=1,n2=20 ->output:1 2 3 5 7 11 13 17 19                                                                                                                                                                                                                                                                                                                                                                        

*/

uint8 Check(uint32 i);
void main(){
	uint32 FirstNumber , SecondNumber , i , CheckedValue ;
	printf("First number  : ");
	scanf("%d" , &FirstNumber );
	printf("Second number : ");
	scanf("%d" , &SecondNumber );
	/* validation check for numbers must be bigger positive and second must be 
	bigger than the first 
	*/
	if((FirstNumber >= 0) && (SecondNumber >= 0) && (FirstNumber < SecondNumber)){ 
		printf("prime numbers between %d and %d are : ", FirstNumber , SecondNumber );
		for(i = FirstNumber ; i <= SecondNumber ; i++){ // loop to call the function 
			CheckedValue= Check(i);
			if(0 == CheckedValue){
				printf("%d ", i);

			}
		} 
	}
	else{
		printf("Error !!! enter positve value or seconde value must be bigger than the first");
	}
}
// fucntion to check on the number if it is prime or not  
uint8 Check(uint32 i){
	uint16 j , flag =0 ;
	for(j=2 ; j<= i/2 ; j++){
		if(i%j == 0){
			flag =1 ;
			break;
		}
	}
	return flag ;
}