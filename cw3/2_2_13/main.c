#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void a(int n)
{
    for(int i=1;i<=sqrt(n);i++){
        for(int j=i;j<=sqrt(n);j++){
            if(i*i+j*j==n){
                printf("%d^2 + %d^2 = %d\n",i,j,n);
                if(i!=j){
                    printf("%d^2 + %d^2 = %d\n",j,i,n);
                }
            }
        }
    }
}
void b(int n){
    for (int i=1; i<=sqrt(n); i++){
        for (int j=i; j<=sqrt(n); j++){
            if (i*i + j*j == n){
                printf("%d^2 + %d^2 = %d\n", i, j, n);
                }
            }
        }
    }
int main()
{
    printf("A\n");
    a(500);
    printf("B\n");
    b(500);
    return 0;
}
