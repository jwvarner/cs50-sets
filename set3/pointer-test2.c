#include <stdio.h>

int main(void)
{
    int arr1[3] = { 1, 2, 3 };
    int arr2[3];

    int pointer;
    
    arr1[0] = pointer;
    pointer = arr2[0];

    printf("%i\n", arr2[0]);
}
