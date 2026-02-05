#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Quadruple structure
typedef struct Quadruple *Pointer_qua;

typedef struct Quadruple {
    char op[10];
    char arg1[10];
    char arg2[10];
    char result[10];
    int indx;
    Pointer_qua next;
} Quadruple;

// Function to allocate memory for a Quadruple
void Allocate_qua(Pointer_qua *P) {
    *P = (struct Quadruple *)malloc(sizeof(struct Quadruple));
    if (*P != NULL) (*P)->next = NULL; // Initialize the next pointer
}

// Function to return the next element in the linked list
Pointer_qua Next_qua(Pointer_qua P) {
    return P->next;
}

// Function to assign the operator to a Quadruple
void Assign_op_qua(Pointer_qua P, const char Val[10]) {
    strcpy(P->op, Val);
}

// Function to assign Arg1 to a Quadruple
void Assign_arg1_qua(Pointer_qua P, const char Val[10]) {
    strcpy(P->arg1, Val);
}

// Function to assign Arg2 to a Quadruple
void Assign_arg2_qua(Pointer_qua P, const char Val[10]) {
    strcpy(P->arg2, Val);
}

// Function to assign Result to a Quadruple
void Assign_result_qua(Pointer_qua P, const char Val[10]) {
    strcpy(P->result, Val);
}

// Function to assign the index
void Assign_indx_qua(Pointer_qua P, int Val) {
    P->indx = Val;  // Correct the assignment
}

// Function to link two Quadruples
void Assign_adr_qua(Pointer_qua P, Pointer_qua Q) {
    P->next = Q;
}

// Function to free a Quadruple
void Free_qua(Pointer_qua P) {
    free(P);
}


//------------------------------------------------------
