#include "pch.h"
#include "two_phase_merge_sort.h"
#include "one_phase_merge_sort.h"
#include "natural_merge_sort.h"

// Тест 1: Пустой массив
TEST(TwoPhaseMergeSortTests, EmptyArray) {
    int arr[1] = { 0 };  
    two_phase_merge_sort(arr, 0);  
    //не упала - етс пройден
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(TwoPhaseMergeSortTests, SingleElement) {
    int arr[] = { 42 };  
    two_phase_merge_sort(arr, 1); 
    EXPECT_EQ(arr[0], 42);
}

// Тест 3: Ваш вариант массива
TEST(TwoPhaseMergeSortTests, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8; 

    two_phase_merge_sort(arr, n);  

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
TEST(OnePhaseMergeSortTestst, EmptyArray) {
    int arr[1] = { 0 };
    one_phase_merge_sort(arr, 0);
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(OnePhaseMergeSortTests, SingleElement) {
    int arr[] = { 77 };
    one_phase_merge_sort(arr, 1);
    EXPECT_EQ(arr[0], 77);
}

// Тест 3: Ваш вариант массива
TEST(OnePhaseMergeSortTests, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8;
    one_phase_merge_sort(arr, n);

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
TEST(NaturalMergeSortTests, EmptyArray) {
    int arr[1] = { 0 }; 
    natural_merge_sort(arr, 0);  
    EXPECT_TRUE(true);  
}

// Тест 2: Массив из одного элемента
TEST(NaturalMergeSortTests, SingleElement) {
    int arr[] = { 42 };  
    natural_merge_sort(arr, 1);  
    EXPECT_EQ(arr[0], 42);
}

// Тест 3: Ваш вариант массива
TEST(NaturalMergeSortTestst, MyVariant) {
    int arr[] = { 16, 9, 5, 18, 1, 11, 7, 3 };
    int n = 8;
    natural_merge_sort(arr, n);  
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
