#include <stdio.h>

int main () {
    int n, buff, i, array[101];

    // считываем массив
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n / 2; i++) {
        // сохраняем одно из чисел массива в дополнительную переменную
        buff = array[i];
        // заменяем элемент из первой половины на элемент из второй половины
        array[i] = array[i + n / 2];
        array[i + n / 2] = buff;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
