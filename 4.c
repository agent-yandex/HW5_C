#include <stdio.h>

void reduce_fraction(int * a, int * b) {
    // заменяем *a и *b переменными, для удобной работы
    int n_a = *a, n_b = *b, max_del;

    // ищем минимальное число, именно оно и будет максимальным делителем,
    // от которого нужно отталкиваться
    if (n_a < n_b) {
        max_del = n_a;
    } else {
        max_del = n_b;
    }

    // цикл проверяет с наибольшего возможного делителя, чтобы сократить
    // время работы программы
    for (int i = max_del; i > 0; i--) {
        // если такой делитель найден, то сокращаем числа и прерываем цикл
        if (n_a % i == 0 && n_b % i == 0) {
            *a = n_a / i;
            *b = n_b / i;
            break;
        }
    }
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
