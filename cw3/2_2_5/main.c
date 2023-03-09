#include <stdio.h>
#include <stdlib.h>
float foo(int n)
{
    float a=1;
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            a*=2;
        }
    }
    else if (n<0)
    {
         for(int i=-1;i>=n;i--)
        {
            a*=2;
        }
    }
    return a;
}
int main()
{
    printf("%f\n", foo(2));
    printf("%f\n", foo(3));
    printf("%f\n", foo(4));
    printf("%f\n", foo(5));
    printf("%f\n", foo(-7));

    return 0;
}
