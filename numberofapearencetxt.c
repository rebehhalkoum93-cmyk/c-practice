#include <stdio.h>
#include <string.h>
int main(){
    FILE *f1;
    f1=fopen("C:/Users/SOFT/Downloads/rbh.txt", "r");
    char c1[256],c2[7];
    int ap=0;
    printf("give me your word:\n");
    scanf("%s",c2);
 while (fscanf(f1, "%s", c1) == 1) {
       if( strcmp(c1,c2)==0){
        ap++;
       }
    } 
    printf("%d",ap);
fclose(f1);
}
