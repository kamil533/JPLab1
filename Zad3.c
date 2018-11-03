#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
double a,b,c;
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
double p;
p=(a+b+c)/2;
printf("%lf", sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}