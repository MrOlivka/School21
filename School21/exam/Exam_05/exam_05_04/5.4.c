#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 1, size = 1, check = 0; 
    int *arr;

    arr=(int*)malloc(sizeof(int));

    if (arr == NULL) {
        printf("n/a");
        free(arr);
        return 0;
    }

    if(scanf("%d", &arr[0]) != 1) {
        printf("n/a");
        free(arr);
        return 0;
    } else {
        check++;
    }

    while(check) {
        arr = (int*)realoc(arr, (i+1) * sizeof(int));
        if(scanf("%d", &arr[0]) != 1) {
            printf("n/a");
            free(arr);
            return 0;
        }
        if (arr[i] == -1) break;
        i++;
        size++;
    }

    if (check) {
        for (int i = 0; i < size; i++) {
            
        }
    }

    free(arr);
    return 0;
}