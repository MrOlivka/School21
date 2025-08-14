#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int temp = 1;
    int temp1 = 0;
    if (scanf("%d", &a) != 1) {
        printf("n/a");
    } else {
        do {
            if ((a % 10) % 2 != 0) {
                temp *= (a % 10);
                temp1 = 1;
            }

            a = a / 10;
        } while (a != 0);
    }
    printf("%d", temp1 ? abs(temp) : 0);
}