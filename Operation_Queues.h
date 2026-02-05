/** Implementation **\: QUEUE OF INTEGERS **/
#include "Operation_LLC.h"
#include "Modules_LLC.c"
typedef int Typeelem_Q ;
typedef int bool;

typedef struct Queue * Pointer_Q ; // this type will be used to define the head and the tail of the queue
typedef struct Node_Q * PList_Q ; // this type will be used to define the node of the queue

#define True 1
#define False 0

struct Node_Q // We define the node 
{
Pointer_Li Val ;
PList_Q Next ;
//int priorite;
};

struct Queue// We define the structure of the head and tail
{
PList_Q Head, Tail ;
};

void Create_Queue ( Pointer_Q *Fil )
{
*Fil = (struct Queue *) malloc( sizeof( struct Queue)) ;
(*Fil)->Head = NULL ;
(*Fil)->Tail = NULL ;
}

bool Empty_Queue (Pointer_Q Fil )
{ return Fil->Head == NULL ;} 

//void Enqueue ( Pointer_Q Fil , Typeelem_Q Val , int pri) 
void Enqueue ( Pointer_Q Fil , Pointer_Li Val ) // Insert a node at the tail of the queue
{
PList_Q Q; // A pointer to a node of queue 
Q = (struct Node_Q *) malloc( sizeof( struct Node_Q)) ; // Allocate a space for a node
Q->Val = Val ;
//Q->priorite=pri;
Q->Next = NULL;
if ( ! Empty_Queue(Fil) ) 
Fil->Tail->Next = Q ; // Insert on the tail
else Fil->Head = Q; // else (first time enqueue ) attach Q to the head as well
Fil->Tail = Q; // designate Q as the new tail
}

void Dequeue (Pointer_Q Fil, Pointer_Li *Val )
{
if (! Empty_Queue(Fil) ) // the queue must be non-empty
{
*Val = Fil->Head->Val ;
Fil->Head = Fil->Head->Next;
}
else printf ( "EMPTY QUEUE \n");
}

/*void Dequeue_Pr(Pointer_Q Fil)
{
	// defiler les elements jusqu'a attiendre l'element le plus pri ensuite re-enfiler le reste
	
}*/
void Display_Queue(Pointer_Q Fil)
{
	PList_Q	iter;
	iter=Fil->Head;
	while(iter!=NULL)
	{
		Pointer_Li r=iter->Val;
		printf("Val= %d \t @Val= %p \t @Next= %p \n",Display_list(r),iter,iter->Next);
		iter=iter->Next;
	}
}
