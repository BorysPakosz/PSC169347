#include <stdio.h>
#include <stdlib.h>
int foo(int m,int n)
{
    int left=0, right=n/m, mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(mid*mid*m<=n){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return left -1;
}
int main()
{
    printf("%d\n",foo(2,16));
    printf("%d\n",foo(6,25));
    printf("%d\n",foo(3,32));
    printf("%d\n",foo(4,54));
    return 0;
}
