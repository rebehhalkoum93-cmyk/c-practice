#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include"Operation_LLC.h"
#include"Modules_LLC.c"
#include "Operation_Queues.h"

int main()
{
    int n=4 ;
	Pointer_Li q, P;
Pointer_Q h;
	P= NULL;
q=NULL;
	// Serie 2 : Question 1
	Create_LLC(&P,&n);
	Create_LLC(&q,&n);
Create_Queue(&h);
Enqueue(h,P);
Enqueue(h,q);
	// Serie 2 : Question 2
Display_Queue(h);

	return 0;
}
