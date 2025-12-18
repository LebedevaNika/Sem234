#include "pch.h"
#include "two_phase_merge_sort.h"
#include <algorithm>

template <typename T>
void two_phase_merge_sort(T arr[], int n) {
    if (n <= 1) return;

    int left = 0;          // начало неотсортированной части
    int right = n - 1;     // конец неотсортированной части

    while (left < right) {
        int min_index = left;
        int max_index = right;

        // Проходим по неотсортированной части
        for (int i = left; i <= right; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;  // нашли новый минимум
            }
            if (arr[i] > arr[max_index]) {
                max_index = i;  // нашли новый максимум
            }
        }

        // ФАЗА 2: Размещаем минимум и максимум на своих местах

        // Ставим минимум в начало (на позицию left)
        if (min_index != left) {
            std::swap(arr[left], arr[min_index]);

            // Важный момент: если максимум был на left, 
            // то после обмена он переместился в min_index
            if (max_index == left) {
                max_index = min_index;
            }
        }

        // Ставим максимум в конец (на позицию right)
        if (max_index != right) {
            std::swap(arr[right], arr[max_index]);
        }

        // Сужаем диапазон неотсортированных элементов
        left++;
        right--;
    }
}

// Явные инстанциации для компилятора
template void two_phase_merge_sort<int>(int arr[], int n);
template void two_phase_merge_sort<double>(double arr[], int n);
