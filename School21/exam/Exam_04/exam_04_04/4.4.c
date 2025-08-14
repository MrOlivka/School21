#include <stdio.h>

int main() {
    int a = 0;
    int max = 0;
    if (scanf("%d", &a) != 1) {
        printf("n/a\n");
    } else {
        do {
            int temp = a % 10;
            a /= 10;
            if (max < temp) {
                max = temp;
            }
        } while (a != 0);
    }
    printf("%d", max);
    return 0;
}
