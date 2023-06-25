# include<stdio.h>
// Function type 2 (with parameter without return type)


void addition (int, int); // Step 3 :-  Function decleration (with data type)
void main (){
	int a=10;
	int b=23;
	
	
	addition (a,b); //Step 1 :- Function Call (with parameteer)
	
}
 void addition(int a,int b)   //Step 2 :- Function Defincation (with parameter no return)
{
	int c;
	c= a + b;
	printf("the value of addition is %d",c);
}
