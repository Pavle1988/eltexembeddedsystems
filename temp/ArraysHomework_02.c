/*

 Задание 2
    Вывести заданный массив размером N
    в обратном порядке.
    
    Пример:
    Ввод –> 1 2 3 4 5
    Вывод –> 5 4 3 2 1

*/

#include<stdio.h>

int main (void) {
    int N = 0;
    printf("Введите значение размера массива: ");
    scanf("%d", &N);
    
    int main_array[N];
    
    printf("Обратный порядок значений массива: ");
    
    for(int i = N; i > 0; i--) {
        main_array[i] = i;
        printf("%d ", main_array[i]);
    }
    printf("\n");
    return 0;
}
