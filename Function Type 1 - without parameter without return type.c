/* Types of Function :- 1 Function without parameter and without return type */ 

#include<stdio.h> // including standard input output file 

void addition();   //step 3 :- Function Declearation
void main(){     
	
     addition();   //Step 1 :- Function Calling	
}

void addition(){   // Step 2 :- Function Defination
	 printf("\n\nYour is addition function.\n\n");
	 int a=6;
	 int b=8;
	 int c;
	 c= a+b;
	 printf("The value of c is %d",c);
}
