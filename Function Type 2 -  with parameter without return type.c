/* Types of Function :- 2 Function with parameter and without return type */ 

#include<stdio.h> // including standard input output file 

void addition(int,int);   //step 3 :- Function Declearation
void main(){    
    int a= 6;     
	int b=8;  
	
     addition(a,b);   //Step 1 :- Function Calling and passing parameters or variables	
}

void addition(int c,int d){   // Step 2 :- Function Defination
	 printf("\n\nYour is addition function.\n\n");
	 
	 int e;
	 e= c+d;
	 printf("The value of c is %d",e);
}
