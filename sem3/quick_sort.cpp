#include "pch.h"
#include "quick_sort.h"
#include <algorithm> 

template <typename T>
int partition(T arr[], int low, int high) {
    T pivot = arr[high];  // Опорный элемент (последний)
    int i = low - 1;      // Индекс меньшего элемента

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}


template <typename T>
void quick_sort_recursive(T arr[], int low, int high) {
    if (low < high) {
        // Находим опорный элемент
        int pi = partition(arr, low, high);
        quick_sort_recursive(arr, low, pi - 1); //отсортировано левее опорного элемента
        quick_sort_recursive(arr, pi + 1, high); //не отсотсортировано правее опорного элемента
    }
}


template <typename T>
void quick_sort(T arr[], int n) {
    if (n <= 1) return;

    quick_sort_recursive(arr, 0, n - 1);
}

// Создаем конкретные версии
template void quick_sort<int>(int arr[], int n);
template void quick_sort<double>(double arr[], int n);
