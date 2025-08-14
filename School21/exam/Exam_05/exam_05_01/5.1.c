#include <stdio.h>
#include <stdlib.h>

int input(int *arr, int n);

int main () {
int n = 0;
if (scanf("%d", &n) != 1 || n <= 0) {
    printf("n/a");
    return 0;
}
int *a, *b;
a = malloc(sizeof(int)* n);
b = malloc(sizeof(int)* n);
 
    if (a == NULL || b == NULL) {
        printf("n/a");
        return 0;
    }

    if (input(a,n) != 0 || input(b,n) != 0) {
        printf("n/a");
        return 0;
    }


int mul = 0;
    for (int j = 0; j < n; j++) {
        mul += a[j] * b[j];
    }
    printf("%d", mul);

    free(a);
    free(b);
    return 0;

}

int input(int *z, int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &z[i]) != 1) {
            return 1;
        }
    }
    return 0;
}