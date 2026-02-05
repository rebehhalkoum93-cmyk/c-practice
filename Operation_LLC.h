#ifndef OPERATION_LLC_H_INCLUDED
#define OPERATION_LLC_H_INCLUDED 

/** Impl�mentation **\: LISTE DE ENTIERS**/
typedef int Typeelem_Li ;
typedef struct Node_Li * Pointer_Li ;
typedef int bool ;

#define True 1
#define False 0

struct Node_Li
{
Typeelem_Li Val ;
Pointer_Li Next ;
} ; // on d�finit la strcuture du maillon


void Allocate_Li (Pointer_Li *P) // allouer un espace et retourner son adresse
{
*P = (struct Node_Li *) malloc( sizeof( struct Node_Li)) ;
(*P)->Next = NULL;
}


void Free_Li ( Pointer_Li P) // lib�rer l'espace d�ja allou�
{ free (P);}

Pointer_Li Next_Li( Pointer_Li P) // retourner l'adresse du prochain �l�ment contenu dans le maillon P
{ return( P->Next ) ; }


Typeelem_Li Value_Li( Pointer_Li P) // retourner l'information contenue dans le maillon P
{ return( P->Val) ; }

void Assign_val_Li(Pointer_Li P, Typeelem_Li Val) // affecter l'information au champ vam du maillon P
{
P->Val = Val ;
}

void Assign_adr_Li( Pointer_Li P, Pointer_Li Q)// lier P � une autre adresse
{
P->Next = Q ;
}

// end of abstract machines *******************


#endif // OPERATION_LLC_H_INCLUDED
//------------------------------------------------------------------------------

        //---------------------------------------------------------------
     