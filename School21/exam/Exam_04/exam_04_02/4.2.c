#include <stdio.h>

int main() {
    int n = 0;
    int max = 0;
    while (scanf("%d", &n) == 1 && n != -1) {
        if (max < n) {
            max = n;
        }
    }

    printf("%d", max);

    return 0;
}