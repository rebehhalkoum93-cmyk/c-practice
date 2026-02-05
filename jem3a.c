#include <stdio.h>
#include <stdlib.h>
#include "Operation_LLC.h"
#include "Modules_LLC.c"
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
void insert_by_pos(Pointer_Li*p,int e){
 Pointer_Li new;
 int val;

Allocate_Li(&new);
printf("enter the value");
scanf("%d",&val);
Assign_val_Li(&new,val);


if (e==1){
   
    *p=new;
}
else{Pointer_Li prev=*p;
    for (int i=2;i<e;i++){
        prev=Next_Li(prev);



}
Pointer_Li next=Next_Li(prev);
Assign_adr_Li(new,next);
 Assign_adr_Li(prev,new) ;
 
}


}
int main(){
    int n,e ;
    Pointer_Li P;
    P= NULL;
    Create_LLC(&P,&n);
    Display_list(P);
    printf("enter the position of the element you want to delete ");
    scanf("%d",&e);
    delete_by_position(&P,e);
    Display_list(P);



}