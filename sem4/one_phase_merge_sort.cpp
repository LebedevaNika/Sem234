#include "pch.h"
#include "one_phase_merge_sort.h"

template <typename T>
void one_phase_merge_sort(T arr[], int n) {
    if (n <= 1) return;

    int mid = n / 2;
    one_phase_merge_sort(arr, mid); //левая часть
    one_phase_merge_sort(arr + mid, n - mid); //правая

    std::vector<T> temp(n);
    int i = 0, j = mid, k = 0;

    while (i < mid && j < n) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }
    //оставшиеся
    while (i < mid) temp[k++] = arr[i++];
    while (j < n) temp[k++] = arr[j++];

    // Копирование обратно
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

template void one_phase_merge_sort<int>(int arr[], int n);
template void one_phase_merge_sort<double>(double arr[], int n);
