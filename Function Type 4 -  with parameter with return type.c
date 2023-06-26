/* Types of Function :- 4 Function with parameter and with return type */ 

#include<stdio.h> // including standard input output file 

int addition();   //step 3 :- Function Declearation
void main(){    
    int f;
	printf("\nThe old value of \"f\" is = %d\n",f);
    f = addition();   //Step 1 :- Function Calling and passing parameters or variables	
   printf("\nThe new value of \"f\" is = %d\n",f);
}

int addition(){   // Step 2 :- Function Defination
	 printf("\nYour is addition function.\n\n");
	 int c=10;
	 int d=20;
	 int e;
	 e= c+d;
	 printf("\nThe value of e or addition is %d \n",e);
	 return e;
}
