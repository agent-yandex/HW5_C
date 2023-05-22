#include <stdio.h>

int main() {
    int n, m, max = 0, min = 10000, i_max, i_min, sum, buff;
    scanf("%d %d\n", &n, &m);
    int array[n][m];

    // считываем массив
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            scanf("%d", &array[r][c]);
        }
    }

    printf("\n"); // для удобства вывода добавляем пустую строку

    // проходимся по столбцам массива
    for (int c = 0; c < m; c++) {
        // считаем сумму столбца
        sum = 0;
        for (int r = 0; r < n; r++) {
            sum += array[r][c];
        }

        // в зависимости от суммы записываем индекс столбца в максимальный
        // или минимальный
        if (sum > max) {
            max = sum;
            i_max = c;
        }

        if (sum < min) {
            min = sum;
            i_min = c;
        }
    }

    // проходимся по строкам массива и меняем значения
    for (int i = 0; i < n; i++) {
        // переменная buff нужна для того, чтобы не потерять значение
        // элемента в массиве
        buff = array[i][i_min];
        array[i][i_min] = array[i][i_max];
        array[i][i_max] = buff;

        // после замены элемента в строке, печатаем ее
        for (int j = 0; j < m; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
