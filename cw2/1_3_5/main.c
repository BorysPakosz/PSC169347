#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int d;
    double a,b,c,h,p,p1;
    printf("Jesli chcesz obliczyc pole trojkata za pomoca 3 bokow napisz:3 \n jesli za pomoaca wyskosci i podstawy napisz cokoliwek np 2:\n ");
    scanf("%d",&d);
    if(d==3){
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    p=(a+b+c)/2;
    p1=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%lf",p1);
    }
    else{
    scanf("%lf",&a);
    scanf("%lf",&h);
    printf("%lf",a*h/2);
    }

    return 0;
}
