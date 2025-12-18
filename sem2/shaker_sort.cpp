#include "pch.h"
#include "shaker_sort.h"

template <typename T>
void shaker_sort(T arr[], int n) {
    if (n <= 1) {
        return;
    }

    int left = 0;        
    int right = n - 1;   

    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                T temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--;  

        //справа налево м л
        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                T temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
        left++;  
    }
}

template void shaker_sort<int>(int arr[], int n);
template void shaker_sort<double>(double arr[], int n);
