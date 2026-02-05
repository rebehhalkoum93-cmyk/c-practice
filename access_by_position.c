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
        printf("enter the position of the element you want to access ");
        scanf("%d",&e);
    t=P;
    if( e<=n ){
    if(e==1){
        printf("the  element is %d  and his adress is %p",Value_Li(P),P);
    }
    else{
        acces=P;
        for (int i=1;i<e;i++){

            acces=Next_Li(acces);
             }
             printf("the  element is %d  and his adress is %p",Value_Li(acces),acces);
            }
        }
        else{printf("erreur");}
        }