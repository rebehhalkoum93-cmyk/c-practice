#include <stdio.h>
#include<stdlib.h>
#include"Operation_LLC.h"
#include "Modules_LLC.c"
int fibo(int n){
if (n<=1){
    return 1;
}
else{
    return (fibo(n-1)+fibo(n-2));
}
}
int fibo_2(int n ){
    if (n<=1){
        return 1;
    }
    else{
    int t1=1,t2=1,t3=0;
for(int i=2 ;i<=n;i++){
    t3=t2;
    t2=t1+t2;
    t1=t3;

}
return t2;

    }

}
bool serch_llc(Pointer_Li p,int val){
if (p=NULL){return 0;}
if(Value_Li(p)==val){return 1;}
else {return serch_llc(Next_Li(p),val);}



}
void reverse_llc(Pointer_Li  *head){

    Pointer_Li head2;
    
        if(head){
    
    head2=Next_Li(head);
    reverse_llc(head2);
    Assign_adr_Li(Next_Li(head),head);
    Assign_adr_Li(head,NULL);
    
    head=head2;
    
        }
    }
int main(){
int n,val;
Pointer_Li p;
printf("write your val");
scanf("%d",&val);
printf("------------>");
Create_LLC(&p,&n);
Display_list(p);


printf("write your val");
scanf("%d",&val);

printf("\n -*****  \t  %d",serch_llc(p,val));


}