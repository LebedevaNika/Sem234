#include "pch.h"
#include "natural_merge_sort.h"

// Простая "естественная" сортировка (на самом деле пузырьковая)


template <typename T>
void natural_merge_sort(T arr[], int n) {
    if (n <= 1) return;

    while (true) {
        // Вектор для хранения границ серий
        std::vector<int> runs;
        runs.push_back(0);  // Начало первой серии

        // 1. Находим все серии (уже отсортированные подпоследовательности)
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                runs.push_back(i);  // Конец текущей серии и начало новой
            }
        }
        runs.push_back(n);  // Конец последней серии

        // Если осталась только одна серия — массив отсортирован
        if (runs.size() <= 2) break;

        // 2. Попарно сливаем серии
        std::vector<T> temp(n);

        for (size_t i = 0; i < runs.size() - 2; i += 2) {
            int left_start = runs[i];
            int left_end = runs[i + 1];
            int right_start = runs[i + 1];
            int right_end = runs[i + 2];

            int idx = left_start;
            int left = left_start;
            int right = right_start;

            // Слияние двух соседних серий
            while (left < left_end && right < right_end) {
                if (arr[left] <= arr[right]) {
                    temp[idx++] = arr[left++];
                }
                else {
                    temp[idx++] = arr[right++];
                }
            }

            while (left < left_end) temp[idx++] = arr[left++];
            while (right < right_end) temp[idx++] = arr[right++];

            // Копируем обратно в исходный массив
            for (int j = left_start; j < right_end; j++) {
                arr[j] = temp[j];
            }
        }
    }
}

// Явные инстанцирования
template void natural_merge_sort<int>(int arr[], int n);
template void natural_merge_sort<double>(double arr[], int n);
