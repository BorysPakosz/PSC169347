#include <stdio.h>
#include <stdlib.h>
int foorek(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n%2==0){
        return foorek(n-1)+n;
    }
    return foorek(n-1)*n;
}
int main()
{
    printf("%d\n",foorek(1));
    printf("%d\n",foorek(2));
    printf("%d\n",foorek(3));
    printf("%d\n",foorek(4));
    printf("%d\n",foorek(5));
    printf("%d\n",foorek(6));
    return 0;
}
