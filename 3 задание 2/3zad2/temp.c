#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *p;
    int b;
    printf("Введите размер массива: ");
    scanf("%i", &n);
    p = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        *(p + i) = i + 1;
    }
    printf("Заполненный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("арифметика: %i\n ", *(p + i));
        printf("массив: %i\n ", p[i]);
    }
    b = (*(p + n - 1));
    printf("размер массива %i \n", b);
    free(p);

    return 0;
}
