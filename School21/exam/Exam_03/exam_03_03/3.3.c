#include <stdio.h>

int main() {
    int a = 0;
    if (scanf("%d", &a) != 1) {
        printf("n/a\n");
    } else if (a > 0) {
        int temp = 0;
        temp = a % 10;
        printf("%d", temp);
        temp = a % 100 / 10;
        printf("%d", temp);
        temp = a / 100;
        printf("%d", temp);
    } else {
        int temp = 0;
        temp = a % 10;
        printf("%d", temp);
        temp = a % 100 / 10 * -1;
        printf("%d", temp);
        temp = a / 100 * -1;
        printf("%d", temp);
    }
}