#include<stdio.h>
//Swapping of Array valeus by using Pointer
void Swapping(int*, int*);             //Function Declearation
void main (){
	int i;
	int a[5]= {1,2,3,4,5};           // Array 1
	int b[5]= {11,12,13,14,15};      // Array 2
	for(i=0;i<=5;i++) {
		printf("the value of a is %d\n",a[i]);      // printing values of "a"  before swapping  
		printf("the value of b is %d\n",b[i]);      // printing values of "b"  before swapping 
	}
	
	Swapping (&a,&b);               // Calling function 
	for(i=0;i<=5;i++) {
		printf("the value of a is %d\n",a[i]);      // printing last result of "a" array after swapping 
		printf("the value of b is %d\n",b[i]);      // printing last result of "b" array after swapping 
	}
}
	void Swapping(int *ptra, int *ptrb){        // Function defination (with pointers)
		int j , temp;                        // defining temporay variabl "temp" for storing values
		for (j=0;j<=5;j++){      
		 temp = *(ptra + j);          // array "a" pointer ptra passing the one cell value to "temp"
		 *(ptra+ j)=*(ptrb+j);  // array "b" pointer "ptra" passing the one cell value to "ptrb" array "a"
		 *(ptrb + j) = temp;    // "temp" value passing pointer "ptrb"
		}	 	
}

