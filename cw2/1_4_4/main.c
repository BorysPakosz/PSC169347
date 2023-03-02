#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i=1,w=1;
    printf("podaj liczbe\n");
    scanf("%d",&n);
    while(i<=n){
        w*=i;
        ++i;
    }
    printf("silnia jest rowna %d",w);
    return 0;
}
