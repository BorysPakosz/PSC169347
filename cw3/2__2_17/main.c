#include <stdio.h>
#include <stdlib.h>

void zliczanie() {
    static int wywolania = 0;
    wywolania++;
    printf("Funkcja zostala wywolana: %d \n", wywolania);
}

int main() {
    zliczanie();
    zliczanie();
    zliczanie();
    zliczanie();
    zliczanie();
    zliczanie();

    return 0;
}
