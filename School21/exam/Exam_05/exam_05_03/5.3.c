#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1,  size = 1, step = 0, check = 0;
    int *arr;

    arr = (int*)malloc(sizeof(int));
    if (arr == NULL) {
        printf("n/a");
        free(arr);
        return 0;
    }

    if (scanf("%d", &arr[0]) == 1) { 
        check = 1;
    } else {
        printf("n/a");
        free(arr);
        return 0;
    }

    while (check) {
        arr = (int*)realloc(arr, (i+1) * sizeof(int));
        if (scanf("%d", &arr[i]) != 1) { 
            free(arr);
            return 0;
        }
        if (arr[i] == -1) break;
        i++;
        size++;
    }

    if (check) {
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                printf(i == size - 1 ? "%d" : "%d ", arr[i - step]);
                step++;
            } else {
                printf(i == size - 1 ? "%d" : "%d ", arr[size - step]);
            }
        }
    } else {
        printf("n/a");
    }
    free(arr);
    return 0;
}