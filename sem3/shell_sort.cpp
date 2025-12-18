#include "pch.h"
#include "shell_sort.h"
template <typename T>
void shell_sort(T arr[], int n) {
    if (n <= 1) return;

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            T temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap]; //сдвиг вправо на шаг, 16 перемещается на шаг вправо
            }

            arr[j] = temp;
        }
    }
}

template void shell_sort<int>(int arr[], int n);
template void shell_sort<double>(double arr[], int n);
