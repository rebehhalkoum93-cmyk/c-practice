#include <stdio.h>
int main(){
    FILE *f1,*f2,*f3;
    f1= fopen("C:/Users/SOFT/Downloads/rbh.txt", "r");
    f2= fopen("C:/Users/SOFT/Downloads/rbh2.txt", "r");
        f3= fopen("C:/Users/SOFT/Downloads/finaltext.txt", "w");

    char c[256];
   
    while ((fgets(c,sizeof(c),f1)) != NULL) {
        fputs(c, f3);
    }
    while ((fgets(c,sizeof(c),f2)) != NULL){
 fputs(c, f3);    }

    fclose(f1); 
        fclose(f2);
        fclose(f3);
        char h[256]; 
                f3= fopen("C:/Users/SOFT/Downloads/finaltext.txt", "r");

     while ((fgets(h,sizeof(h),f3)) != NULL) {
        printf("%s",h);
    }  
    fclose(f3);

}

