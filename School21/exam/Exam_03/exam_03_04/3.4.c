#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0;

    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("n/a\n");
    } else if (c > a && c < b) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}