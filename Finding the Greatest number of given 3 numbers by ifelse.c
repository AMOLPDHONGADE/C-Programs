// Finding the greater numbers from given  3 numbers
#include<stdio.h >
void main(){
 int a,b,c;
 printf("Enter the value of a = ");
 scanf("%d", &a);
 printf("\n");
 printf("Enter the value of b = ");
 scanf("%d", &b);
 printf("\n");
 printf("Enter the value of c = ");
 scanf("%d", &c);
 printf("\n");
 if (a>b && a>c){
 	printf("a is the gretest number of all given numbers");
 }
 else if(b>a && b>c){
 printf("b is the gretest number of all given numbers");	
 }
 else{
 	printf("c is the gretest number of all given numbers");
 }
 
}


