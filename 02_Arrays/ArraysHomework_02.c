/*
    Задание 2
    Вывести заданный массив размером N
    в обратном порядке.
    
    Пример:
    Ввод –> 1 2 3 4 5
    Вывод –> 5 4 3 2 1
*/

#include<stdio.h>

int main(void) {
  int N;

  // Ввод размера массива
  printf("Введите размер массива: ");
  scanf("%d", &N);

  // Объявление массива
  int arr[N];

  // Ввод элементов массива
  printf("Введите значения для наполнения элементов массива:\n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  // Вывод элементов массива в обратном порядке
  printf("Элементы массива в обратном порядке: ");
  for (int i = N - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

