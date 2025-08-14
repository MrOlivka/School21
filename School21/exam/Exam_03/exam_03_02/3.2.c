#include <math.h>
#include <stdio.h>

int main() {
    double rad = 57.29;
    double a = 0;

    if (scanf("%lf", &a) != 1) {
        printf("n/a\n");
    } else {
        a = round(rad * a);
        printf("%.0lf", a);
    }
}