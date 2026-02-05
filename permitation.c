#include<stdio.h>
void perm(int *a,int *b){
int temp ;
temp=*a;
*a=*b;
*b=temp;


}
int main(){
    int x=2,y=5;

perm(&x,&y);

printf("the y : %d",y);
printf("\nthe x  : %d",x);


return 0;
}