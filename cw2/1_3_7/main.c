#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c,x1,x2,delt;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    //Watunek a=0
    if(a==0){
        if(b==0){
            if(c==0){
                printf("nieskonczenie wiele mozliwosci");
            }
            else{
                printf("brak rozwiazan");
            }
        }
        else{
            x1=-c/b;
            printf("%lf",x1);
        }
    }
    //delta:
    else{
        delt=pow(b,2)-4*a*c;
        if(delt>0){
            x1=(-b+sqrt(delt))/(2*a);
            x2=(-b-sqrt(delt))/(2*a);
            printf("x1= %lf, x2= %lf", x1, x2);
        }
        else if(delt==0){
            x1=-b/(2*a);
            printf("%lf",x1);
        }
        else{
            printf("Brak odpowiedzi");
        }
    }
    return 0;
}
