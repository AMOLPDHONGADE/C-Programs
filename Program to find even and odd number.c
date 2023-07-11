#include<stdio.h>
// Program for finding the odd and even number

void main(){
	int Num,result;
	printf("Enter the value  = ");
	scanf("%d",&Num);
	result =Num%2;
	if (result==0){
		printf("the given Number is even");	
	}
	else{
		printf("The given Number is odd");
	}	
}
