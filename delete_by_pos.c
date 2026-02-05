#include <stdio.h>
#include <stdlib.h>
#include"Operation_LLC.h"
#include"Modules_LLC.c"
int main(){
    int n,e ;
	Pointer_Li P,t,acces,prev,nex;
	P= NULL;
	Create_LLC(&P,&n);
    Display_list(P);
    printf("enter the position of the element you want to delete ");
    scanf("%d",&e);
    t=P;
    if(e==1){
        P=Next_Li(P);
        Display_list(P);        
    }
   
    else{
        prev=t;
    for (int i=2;i<e;i++){
prev=Next_Li(prev);
 }
    t=Next_Li(prev);
    nex=Next_Li(t);
    Assign_adr_Li(prev,nex);
    Display_list(P);}

}