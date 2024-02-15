/*
    size_t for arrays!

*/
#include <stdio.h>
#define SIZE 10

void bubblesort(int * const array, size_t size);


int main(void)
{
    int arr1[SIZE] = { 2, 3, 1, 4, 7, 6, 5, 8, 10, 9 };

    bubblesort(arr1, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}

void bubblesort(int * const array, size_t size)
{
    void swap(int *pointer1, int *pointer2);

    for (size_t runs = 0; runs < size - 1; ++runs)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if(array[j] > array[j+1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

//This was annoying
void swap(int *pointer1, int *pointer2)
{
    int carry = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = carry;
}

//is it this annoying with structs?