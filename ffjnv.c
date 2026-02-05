#include <stdio.h>
#include <string.h>
int main() {

const double p = 3.14159;

double r;
double c;
double area ;
printf("\nenter the r :  ");

scanf("%lf",&r);
c = 2 * p * r ;
area = p*r*r;
printf("\nthe c is : %lf",c);
printf("\nthe area of the circle is : %lf ",area);
    return 0;

}