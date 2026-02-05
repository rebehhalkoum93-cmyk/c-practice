#include <stdio.h>
#include <stdlib.h>
#include"Operation_LLC.h"
#include"Modules_LLC.c"
    int main(){
        int n=5,m=4,e ;
        Pointer_Li t1,t2,P,Q ;
        P= NULL;
        Create_LLC(&P,&n);
        Display_list(P);
        Create_LLC(&Q,&m);
        Display_list(Q);
        t1=P;
        t2=Q;
        int a=1,b=1;
        while ((a<=n)&&(b<=m)){
if (Value_Li(t1)<Value_Li(t2)){Assign_adr_Li(t2,t1); P=Next_Li(P);a++;}
else {Q=Next_Li(Q);b++;}



        }
       

        Display_list(Q);




}