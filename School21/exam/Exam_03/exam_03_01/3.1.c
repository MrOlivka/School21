#include <math.h>
#include <stdio.h>

int main() {
    double rad = 0;
    double mas = 0;
    if (scanf("%lf", &rad) != 1 || rad <= 0) {
        printf("n/a\n");
    } else {
        mas = (21500 * ((4 * M_PI * rad * rad * rad) / 3));
        // mas = round(mas);
        printf("%.0f", mas);
    }
    return 0;
}