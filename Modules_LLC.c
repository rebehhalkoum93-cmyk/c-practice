/****************S�rie 2 : question 1 Cr�ation d'une LLC ***********************/
#include "stdlib.h" 
#include <stddef.h>
#include <stdio.h>
#include"Operation_LLC.h"

void Create_LLC (Pointer_Li *P, int *n) // procedure permettant de cr�er une LLC avec n maillons
{
	Pointer_Li iter, temp ;
	int i,x;
	printf("Provide the number of elements n :\n");
	scanf("%d", n);

	Allocate_Li(P);  // on cr�e la t�te de la liste
	Assign_val_Li(*P,1);  // P->val = 10;
	Assign_adr_Li(*P,NULL); // P->Next= NULL;

	iter=*P; // on place iter en tete de la liste

	printf("iter on the head of the list iter=%p \t P=%p \t n= %d \t iter->val = %d\n", iter,*P, *n, iter->Val);

	for(i=1; i<*n; i++)
		{
		Allocate_Li(&temp);
		if(temp==NULL)
			printf("Memory space allocation error \n");
		else
		{
			printf("enter the value %d",i);
			scanf("%d",&x);
			
			Assign_val_Li(temp,x) ;	//	<==>	temp->Val= x
			Assign_adr_Li(temp,NULL); 	// <==>	temp-Next=NULL

			Assign_adr_Li(iter,temp);  // <==> iter->Next= temp
			iter=Next_Li(iter);	// <==> iter= iter->Next

		}

		}
}
void Display_list(Pointer_Li P) // procedure permettant d'afficher une llC
{
	Pointer_Li iter;
	iter=P;
	printf("iter on the head of the list iter=%p \t P=%p \n", iter,P);
	printf("Value \t Current Address \t Next Adress \n");
		while(iter!=NULL)
		{
			printf("%d \t @Current=%p \t @Next=%p \n", Value_Li(iter), iter, Next_Li(iter));
			iter=Next_Li(iter); 		
		}

}

/****************S�rie 2 : question 2 lengeueur d'une LLC ***********************/

int length_LLC(Pointer_Li P)
{
	int n = 0;
	Pointer_Li iter;
	iter=P; // on positionne iter en t�te de la liste

	while(iter!=NULL)
	{
		n++;
		iter=Next_Li(iter);
	}
	return n;
}
