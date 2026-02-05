#include <stdio.h>
void  merge(int tab1[],int tab2[],int s1,int s2,int t3[]){

    int x=0,y=0,z=0 ;
    while (x<s1&&y<s2){


        if ((tab1[x])<(tab2[y])){

            t3[z++]=tab1[x++];
           
        }
        else if(((tab1[x])>(tab2[y]))){

            t3[z]=tab2[y];
            z++;
            y++;
        }
        else if(((tab1[x])=(tab2[y]))){

            t3[z]=tab2[y];
            z++;
            y++;
            t3[z]=tab1[x];
            z++;
            y++;
        }
    }
    if (x>=s1){
while (y<s2) {
t3[z++]=tab2[y++];


}}else{
    while(x<s1){
        t3[z++]=tab1[x++];
       
    }
}
    
}

int main() {
    int s1, s2;

    
    printf("Give me size 1: ");
    scanf("%d", &s1);
    printf("Give me size 2: ");
    scanf("%d", &s2);

    int tab1[s1];
    int tab2[s2];

    for (int i = 0; i < s1; i++) {
        printf("Enter value for tab1 at position %d: ", i);
        scanf("%d", &tab1[i]);
    }

    for (int j = 0; j < s2; j++) {
        printf("Enter value for tab2 at position %d: ", j);
        scanf("%d", &tab2[j]);
    }

    
    
    int s3=s1+s2;
    int t3[s3];
    merge( tab1 , tab2 , s1, s2, t3);
for(int h = 0 ; h<s3;h++){
printf("t3[%d]:",h);
printf(" %d\n",t3[h]);

}
    return 0;
}

