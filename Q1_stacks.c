#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Operation_Stacks.h"
int charToValue(char c) {
    return c - '0';  // يحول '0' إلى 0 و '9' إلى 9
}
int main(){
int x;
int y;

    char expr[50];
    printf("Enter your expression ");
    scanf("%s", expr);
    Pointer_S P;
        Create_Stack(&P);
        int i=0;
        while (i<=strlen(expr)){


            if (expr[i]=='+'){Pop(&P,&x);Pop(&P,&y);Push(&P,(x+y)); }
            if (expr[i]=='-'){Pop(&P,&x);Pop(&P,&y);Push(&P,(x-y));}
            if (expr[i]=='/'){Pop(&P,&x);Pop(&P,&y);Push(&P,(x/y));}
            if (expr[i]=='~'){Pop(&P,&x);Push(&P,(-x));}
            if (expr[i]=='*'){Pop(&P,&x);Pop(&P,&y),Push(&P,(x*y));}
           else { if (expr[i]!=' '){  Push(&P,charToValue(expr[i])) ; }}
            
i++;
}
Display_Stack(P);
}