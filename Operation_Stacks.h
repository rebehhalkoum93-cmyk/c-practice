typedef int bool ;

#define True 1
#define False 0

/** Implementation **\: STACK OF INTEGERS **/
//typedef char Typeelem_S ;
typedef int Typeelem_S ;
//typedef char Typeelem_S ;
typedef struct Node_S * Pointer_S ;


struct Node_S 
{
Typeelem_S Val ;
Pointer_S Next ;
};

void Create_Stack( Pointer_S *P ) // pile vide 
{ *P = NULL ; } // *P will present the top of the stack

bool Empty_stack ( Pointer_S P )
{ return (P == NULL ); }

void Push ( Pointer_S *P, Typeelem_S Val )
{
Pointer_S Q;
Q = (struct Node_S *) malloc( sizeof( struct Node_S)) ;
Q->Val = Val ;
Q->Next = *P; //  placer the node Q on the top of the stack
*P = Q; // designate the new top of the stack *P
}

void Pop ( Pointer_S *P, Typeelem_S *Val )
{
	
Pointer_S Sauv;
if (! Empty_stack (*P) )
{
*Val = (*P)->Val ;
Sauv = *P; // Save the top
*P = (*P)->Next;  // consider the next node as the top of the stack
Sauv->Next=NULL; // remove the old top 
free(Sauv);
}
else printf ("Empty stack \n");
}
//****end of abstract machines 
void Display_Stack(Pointer_S P)
{
	Pointer_S iter;
	iter=P;
	while(iter!=NULL) // Display of the nodes from the top to the base
	{
		printf("Val= %d \t @Val= %p \t @Next= %p \n",iter->Val,iter,iter->Next);
		iter=iter->Next;
	}
}

