#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i=0;
    scanf("%d",&a);
    while(i*i<=a){
        i++;
    }
    printf("%d",i-1);
}
