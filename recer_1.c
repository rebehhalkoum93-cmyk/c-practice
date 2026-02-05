#include<stdio.h>
#include<stdlib.h>
int sum_rec(int n){

if(n==1){return 1;}
else {
    return sum_rec(n-1)+n;
}

}
int mul_rec(int a,int b){
    if ((a==0)||(b==0)){return 0;}
    else{
if (b==1){return a;}
else{
    return a+mul_rec(a,b-1);
    

}

    }

}
int sum_tab_rec(int t[],int s){

if (s==1){
    return t[0];
}
else{

    return t[s-1]+sum_tab_rec(t,s-2);
}




}
int main(){
int n=100,b;
int t[n];
printf("give me size");
scanf("%d",&b);
for (int i=0 ;i<=(b-1);i++){
    printf("the t[%d]  =  ",i);
    scanf("%d",&t[i]);
}
int som=sum_tab_rec(t,b);
printf("the result = %d ",som);

}