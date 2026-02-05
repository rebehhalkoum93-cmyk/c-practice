#include <stdlib.h>
#include <stdio.h>
#include "Operation_LLC.h"


void access_by_possition(Pointer_Li P,int e,Pointer_Li *ret){
    *ret=P;
    if(e<length_LLC(P)){
for (int i=1 ;i<e;i++){

*ret=Next_Li(*ret);


}
    }
    else{ *ret=NULL;}



}
void delete_by_position(Pointer_Li *p,int e){
    if (e==1){
        *p=Next_Li(*p);
    }
    else{
    Pointer_Li prev=*p;
        for (int i=2;i<e;i++){
    prev=Next_Li(prev);
    
    
    
        }
        Pointer_Li next,local;
        local=Next_Li(prev);
        next=Next_Li(local);
        Assign_adr_Li(prev,next);
    }
}
void Enqueue ( Pointer_Q Fil , Pointer_Li val ) // Insert a node at the tail of the queue
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

