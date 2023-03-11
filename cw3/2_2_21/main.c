#include <stdio.h>
#include <stdlib.h>
int rek(int n){
    if(n==0)
        return 1;
    else{
        return 2 * rek(n-1) + 5;
    }

}
int main()
{

   printf("%d\n", rek(1));
   printf("%d\n", rek(2));
   printf("%d\n", rek(3));
   printf("%d\n", rek(4));
   printf("%d\n", rek(5));
    return 0;
}
