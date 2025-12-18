#include "pch.h"
#include "quick_sort.h"
#include "shell_sort.h"


// Тест 1: Пустой массив
TEST(QuickSortTest, EmptyArray) {
    int arr[1] = { 0 };  
    quick_sort(arr, 0);  
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(QuickSortTest, SingleElement) {
    int arr[] = { 42 };  
    quick_sort(arr, 1);  
    EXPECT_EQ(arr[0], 42);
}

// Тест 3: Ваш вариант массива
TEST(QuickSortTest, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8;  

    quick_sort(arr, n); 
    EXPECT_EQ(arr[0], 1);   
    EXPECT_EQ(arr[1], 3);
    EXPECT_EQ(arr[2], 5);
    EXPECT_EQ(arr[3], 7);
    EXPECT_EQ(arr[4], 9);
    EXPECT_EQ(arr[5], 11);
    EXPECT_EQ(arr[6], 16);
    EXPECT_EQ(arr[7], 18);  
}


// Тест 1: Пустой массив
TEST(ShellSortTest, EmptyArray) {
    int arr[1] = { 0 };
    shell_sort(arr, 0);
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(ShellSortTestt, SingleElement) {
    int arr[] = { 77 };
    shell_sort(arr, 1);
    EXPECT_EQ(arr[0], 77);
}

// Тест 3: Ваш вариант массива
TEST(ShellSortTest, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8;

    shell_sort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 3);
    EXPECT_EQ(arr[2], 5);
    EXPECT_EQ(arr[3], 7);
    EXPECT_EQ(arr[4], 9);
    EXPECT_EQ(arr[5], 11);
    EXPECT_EQ(arr[6], 16);
    EXPECT_EQ(arr[7], 18);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
