#include<stdio.h>
#include<stdlib.h>
#include"Operation_Queues.h"


int main()
{
	Pointer_Q P; // déclaration d'un pointeur vers la tête et la queue de la file 
	int x;
	
	Create_Queue(&P); // create an empty queue
	
	Enqueue(P,10);
	Enqueue(P,15);
	Enqueue(P,25);       // Queue -> 25 --> 15 --> 10 <- tete
	
	Display_Queue(P);
	Dequeue(P,&x); // 10
	printf("Dequeue x=%d \n",x);
	
	Display_Queue(P);
	
	Dequeue(P,&x); // 15
	printf("Dequeue x=%d \n",x);
	Display_Queue(P);
	
	Dequeue(P,&x); // 25
	printf("Dequeue x=%d \n",x);
	Display_Queue(P);
		
	Dequeue(P,&x); 
	printf("Dequeue x=%d \n",x);
	return 0;
}
