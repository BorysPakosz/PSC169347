#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=1;
    scanf("%d",&n);
    if(n>2){
    for(int i=2;i<=n;++i){
        if(i%2==0){
        a=a*i;
        }
    }
    printf("%d",a);
    }
    else{
        printf("liczba mniejsza badz rowna 2 ");
    }
    return 0;
}
