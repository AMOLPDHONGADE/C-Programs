#include<stdio.h>
#include<string.h>
 // Factorial of given number 
 
 void main(){ 
 char operation;

 printf("Do you want to start the operation Y/N = ");
 scanf("%c",&operation);
 
 	while(operation == 'y'|| 'Y'){
 	int Num,i,fact,Min;   //  1."Num" is user Input 
	                     //   2."fact" is used to store num value 
						//    3."Min" is used to reduction of Num values for factorial operation.
 	
 	printf("Enter the Number = ");
 	scanf("%d",&Num);       // Taking user Input 
 	printf("\n");
 	fact=Num;              // Passing Num value to fact variable 
 	for (i=1;i<Num;i++){
 		 Min =Num-i;        // subtracting the one by one or i values from the num to get below number
 		 
 		 if(Min==Num){     // once the min value and Num value is equal it will break the loop. 
 		    
		  	break;
		  }
		fact= fact*Min;   // factorial operation 
	 }
	 printf("the value of fact is = %d\n", fact);   // factorial result.
     printf("\n");
     
}
 	
 }
