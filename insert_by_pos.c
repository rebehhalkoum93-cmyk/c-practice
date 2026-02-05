#include <stdio.h>
#include <stdlib.h>
#include"Operation_LLC.h"
#include"Modules_LLC.c"
int main(){

    int n,e ;
    Pointer_Li P,Q,t,acces,prev,nex;
    P= NULL;
    Create_LLC(&P,&n);
    Display_list(P);
    printf("enter the position of the node  you want to insert");
    scanf("%d",&e);
    
   insert_by_position(&P,e,15);
   Display_list(P);
}