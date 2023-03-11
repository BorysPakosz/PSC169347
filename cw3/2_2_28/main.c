#include <stdio.h>
#include <stdlib.h>
int f(int n,int m)
{
    if(m==0){
        return n;
    }
    else if(n<m){
        return f(m,n);
    }
    return n-m+f(n-1,m)+f(n,m-1);
}
int main()
{
    printf("%d\n",f(0,23));
    printf("%d\n",f(5,3));
    printf("%d\n",f(3,2));
    printf("%d\n",f(6,5));
    printf("%d\n",f(7,8));
    return 0;
}
