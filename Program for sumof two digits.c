#include<stdio.h>

// Sum of two digit number 

void main(){
	int Num,r1,q1,Sum;
	printf("Enter the Number = ");
	scanf("%d",&Num);
	q1= Num/10;
	r1= Num%10;
	printf("%d\n",Sum=q1+r1);
	
}
