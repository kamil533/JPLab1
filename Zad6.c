#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
double a;
scanf("%lf", &a);
double pierwiastek;
pierwiastek=sqrt(a);
double odwrotnosc;
odwrotnosc=1/a;
    if(a>0) {
printf("Pierwiastek: %.2lf\n",pierwiastek);
printf("Odwrotnosc: %.2lf",odwrotnosc);
    }
    if(a==0){
     printf("Pierwiastek: %.2lf\n",pierwiastek);
    printf(("Odwrotnosc: BLAD"),odwrotnosc);
    }
    if (a<0){
     printf("Pierwiastek: BLAD\n");  
        printf("Odwrotnosc: %.2lf\n", odwrotnosc);
    }
 return 0;
}




