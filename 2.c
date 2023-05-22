#include <stdio.h>

struct Person
{
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) {
    float middle, count = 0, sum = 0;

    // считаем сумму возрастов всех структур и их кол-во
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
        count++;
    }
    // вычисляем среднее значение возраста
    middle = sum / count;

    return middle;
}

int main () {
    struct Person array[3] = {
        {25, "Nikita"},
        {40, "Vlad"},
        {15, "Ivan"}
    };

    printf("%f\n", averageAge(array, 3));
    return 0;
}
