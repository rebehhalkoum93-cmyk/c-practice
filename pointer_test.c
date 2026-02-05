#include <stdio.h>
#include<stdlib.h>
int main(){

int a,*p;
a=5;
p=NULL;
printf("\n **************************************\n");
printf("adress et valeurs initialises  a=%d         @a=%p      p=%p   *p=%d",a,&a,p,&p);
p=&a;
printf("\nadress et valeurs initialises a=%d         @a=%p      p=%p   *p=%d",a,&a,p,&p);
a=10;
printf("\nadress et valeurs initialises a=%d         @a=%p      p=%p   *p=%d",a,&a,p,&p);
*p=15;
printf("\nadress et valeurs initialises  a=%d         @a=%p      p=%p   *p=%d",a,&a,p,&p);
p=malloc(sizeof(int));
printf("\n p=%p \t @p=%p \t *p= %d \n",p,&p,*p);
*p=25;
printf(" p=%p \t @p=%p \t *p= %d \n",p,&p,*p);

free(p);
printf(" p=%p \t @p=%p \t *p= %d \n",p,&p,*p);


return 0;
}