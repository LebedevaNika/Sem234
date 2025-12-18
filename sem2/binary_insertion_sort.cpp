#include "pch.h"
#include "binary_insertion_sort.h"
#include <iostream> 

template <typename T>
void binary_insertion_sort(T arr[], int n) {
    if (n <= 1) {
        return;
    }

    for (int i = 1; i < n; i++) {
        T current = arr[i];  //элемент для вставки

        int left = 0;
        int right = i - 1;
        int position = i;  

        while (left <= right) {
            int middle = (left + right) / 2;

            if (arr[middle] == current) {
                position = middle + 1;  // Вставляем после одинакового
                break;
            }

            if (arr[middle] < current) {
                left = middle + 1;  // двигаю левую границу
            }
            else {
                right = middle - 1; 
            }
        }

        if (left > right) {
            position = left;  
        }

        // двигаю элементы вправо
        for (int j = i; j > position; j--) {
            arr[j] = arr[j - 1];
        }
        arr[position] = current;
    }
}

template void binary_insertion_sort<int>(int arr[], int n);
template void binary_insertion_sort<double>(double arr[], int n);
