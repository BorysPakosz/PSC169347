#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    double a,b;
    printf("podaj dwie liczby \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Jaka operacje chcesz wykonac na podanch liczbach wpisz : \n 1 +\n 2 - \n 3 *\n 4 /\n ");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("%lf",a+b);
            break;
        case 2:
            printf("%lf",a-b);
            break;
        case 3:
            printf("%lf",a*b);
            break;
        case 4:
            printf("%lf",a/b);
            break;
        default:
            printf("zle podany przyklad");
            break;
    }
    return 0;

}
