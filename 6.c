#include <stdio.h>

int abs_arr(int arr[], int n) {
    // pointer - указатель на первый элемент в массиве
    int *pointer = arr, count = 0;

    // проходимся по массиву и если элемент < 0, то заменяем его модулем
    // и добавляем +1 к count
    for (int i = 0; i < n; i++) {
        if (*pointer < 0) {
            *pointer = 0 - *pointer;
            count += 1;
        }
        // прибавляем +1 к указателю, чтобы перейти на следующий
        // элемент массива
        pointer++;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    // считываем массив
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // печатаем кол-во замен
    printf("%d ", abs_arr(array, n));

    // печатаем исправленный массив
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
