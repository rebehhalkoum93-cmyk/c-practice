#ifndef OPERATION_BT_H_INCLUDED
#define OPERATION_BT_H_INCLUDED 

/** Implementation: BINARY TREE OF INTEGERS **/
typedef int Typeelem_BT;
typedef struct Node_BT * Pointer_BT;
typedef int bool;

#define True 1
#define False 0

struct Node_BT
{
    Typeelem_BT Val;
    Pointer_BT Left;
    Pointer_BT Right;
}; // defines the structure of a binary tree node


void Allocate_BT(Pointer_BT *P) // allocate space for a node and return its address
{
    *P = (struct Node_BT *) malloc(sizeof(struct Node_BT));
    (*P)->Left = NULL;
    (*P)->Right = NULL;
}


void Free_BT(Pointer_BT P) // free the allocated space
{ 
    free(P);
}

Pointer_BT Left_BT(Pointer_BT P) // return the left child of node P
{ 
    return P->Left; 
}

Pointer_BT Right_BT(Pointer_BT P) // return the right child of node P
{ 
    return P->Right; 
}

Typeelem_BT Value_BT(Pointer_BT P) // return the value contained in node P
{ 
    return P->Val; 
}

void Assign_val_BT(Pointer_BT P, Typeelem_BT Val) // assign value to the node P
{
    P->Val = Val;
}

void Assign_left_BT(Pointer_BT P, Pointer_BT Q) // assign left child to node P
{
    P->Left = Q;
}

void Assign_right_BT(Pointer_BT P, Pointer_BT Q) // assign right child to node P
{
    P->Right = Q;
}

// end of abstract machines *******************

#endif // OPERATION_BT_H_INCLUDED