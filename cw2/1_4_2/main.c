#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m,a=1;
    printf("podaj 2 liczby: \n");
    scanf("%d",&n);
    scanf("%d",&m);
    while(a<=m){
        printf("%f \n",pow(n,a));
        ++a;
    }
}
