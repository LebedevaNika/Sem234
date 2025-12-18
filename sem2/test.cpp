#include "pch.h"
#include "binary_insertion_sort.h"
#include "shaker_sort.h"


// Тест 1: Пустой массив
TEST(BinaryInsertionSortTest, EmptyArray) {
    int arr[1] = { 0 };  
    binary_insertion_sort(arr, 0); 
    // программа не упала
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(BinaryInsertionSortTest, SingleElement) {
    int arr[] = { 42 };  
    binary_insertion_sort(arr, 1);  
    //проверка
    EXPECT_EQ(arr[0], 42);
}

// Тест 3: вариант 
TEST(BinaryInsertionSortTest, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8; 

    binary_insertion_sort(arr, n);  


    EXPECT_EQ(arr[0], 1);  
    EXPECT_EQ(arr[1], 3);
    EXPECT_EQ(arr[2], 5);
    EXPECT_EQ(arr[3], 7);
    EXPECT_EQ(arr[4], 9);
    EXPECT_EQ(arr[5], 11);
    EXPECT_EQ(arr[6], 16);
    EXPECT_EQ(arr[7], 18); 
}

// shaker

// Тест 1: Пустой массив
TEST(ShakerSortTest, EmptyArray) {
    int arr[1] = { 0 };
    shaker_sort(arr, 0);
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(ShakerSortTest, SingleElement) {
    int arr[] = { 77 };
    shaker_sort(arr, 1);
    EXPECT_EQ(arr[0], 77);
}

// Тест 3: Ваш вариант массива
TEST(ShakerSortTest, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8;

    shaker_sort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 3);
    EXPECT_EQ(arr[2], 5);
    EXPECT_EQ(arr[3], 7);
    EXPECT_EQ(arr[4], 9);
    EXPECT_EQ(arr[5], 11);
    EXPECT_EQ(arr[6], 16);
    EXPECT_EQ(arr[7], 18);
}
//для запуска гугл тест
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
