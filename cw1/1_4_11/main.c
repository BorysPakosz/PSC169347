#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    //a
    int x=0;
    while(abs(a)*pow(x,2)+b*x+c<=d){
        x++;
    }
    printf("A)%d\n",x);
    //b
    while(5*pow(x,2)+a*x+b<c){
        x++;
    }
    printf("B)%d\n",x-1);
    //c
    while(5*pow(x,2)+a*x+b<=c){
        x++;
    }
    printf("B)%d\n",x-1);
}
