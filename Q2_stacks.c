#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Operation_Stacks.h"
int main(){
bool check=True;
int temp;
char expr[50];
printf("Enter your expression ");
scanf("%s", expr);
Pointer_S P;
	Create_Stack(&P);
    int t=0;
    int i=0;
while (i<=strlen(expr)){
if ((expr[i]=='{')||(expr[i]=='(')||(expr[i]=='[')){
    Push(&P,expr[i]);
    t++;
}
i++;
}
i=t;
while (i<=strlen(expr)){
    if (expr[i]=='}'){

        
        Pop(&P,&temp);
        if ((temp!='{')||(P!=NULL)){check=False;}
    }
    if (expr[i]==')'){

      
        Pop(&P,&temp);
        if ((temp!='(')||(P!=NULL)){check=False;}
    }
    if (expr[i]==']'){

   
        Pop(&P,&temp);
        if ((temp!='[')||(P!=NULL)){check=False;}
    }

i++;
}
if(P!=NULL){check=False;}
if( check==True ){printf("valide");}
else {printf("invalide");}

}