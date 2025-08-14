#include <stdio.h>

int main() {
    int x = 0, y = 0, z = 0;
    if (scanf("%d %d %d", &x, &y, &z) != 3 && (x == 0 || x == 1 || y == 0 || y == 1 || z == 0 || z == 1)) {
        printf("n/a\n");
    } else if ((x && y) || (x && z)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}