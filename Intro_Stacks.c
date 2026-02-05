#include<stdio.h>
#include<stdlib.h>
#include"Operation_Stacks.h"


int main()
{
	Pointer_S P;
	int x;
	Create_Stack(&P);
	Push(&P,10);
	Push(&P,15);
	Push(&P,18);
	Display_Stack(P);
	
	Pop(&P,&x); // 18
	printf("Popping a value from the top of the stack x=%d \n",x);
	
	Display_Stack(P);
	
	Pop(&P,&x); //15
	printf("Popping a value from the top of the stack x=%d \n",x);
	
	Display_Stack(P);
	
	Pop(&P,&x);//10
	printf("Popping a value from the top of the stack x=%d \n",x);
	
	Display_Stack(P);
	
	Pop(&P,&x);// popping from an empty stack 
	printf("Popping a value from the top of the stack x=%d \n",x);
return 0 ;	
}
