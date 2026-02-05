#include <stdio.h>
#include <stdlib.h>
#include "Operation_LLC.h"
#include "Modules_LLC.c"
#include "module_rbh.c"
int main(){

    int n,e ;
    Pointer_Li P;
    P= NULL;
    Create_LLC(&P,&n);
    Display_list(P);
    printf("enter the position of the element you want to delete ");
    scanf("%d",&e);
    access_by_possition(P,e);



}