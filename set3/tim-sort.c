/*

    https://www.geeksforgeeks.org/timsort/

    Let’s consider the following array as an example: arr[] = {4, 2, 8, 6, 1, 5, 9, 3, 7}.

    Step 1: Define the size of the run

        Minimum run size: 32 (we’ll ignore this step since our array is small)

    Step 2: Divide the array into runs

        In this step, we’ll use insertion sort to sort the small subsequences (runs) within the array.
        The initial array: [4, 2, 8, 6, 1, 5, 9, 3, 7]
        No initial runs are present, so we’ll create runs using insertion sort.
        Sorted runs: [2, 4], [6, 8], [1, 5, 9], [3, 7]
        Updated array: [2, 4, 6, 8, 1, 5, 9, 3, 7]

    Step 3: Merge the runs

        In this step, we’ll merge the sorted runs using a modified merge sort algorithm.
        Merge the runs until the entire array is sorted.
        Merged runs: [2, 4, 6, 8], [1, 3, 5, 7, 9]
        Updated array: [2, 4, 6, 8, 1, 3, 5, 7, 9]

    Step 4: Adjust the run size

        After each merge operation, we double the size of the run until it exceeds the length of the array.
        The run size doubles: 32, 64, 128 (we’ll ignore this step since our array is small)

    Step 5: Continue merging

        Repeat the merging process until the entire array is sorted.
        Final merged run: [1, 2, 3, 4, 5, 6, 7, 8, 9]

    The final sorted array is [1, 2, 3, 4, 5, 6, 7, 8, 9].



*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int array_one[10] = { 107, 27, 135, 71, 23, 32, 189, 132, 138, 45 };

    int a=0;
    while (array_one[a] != SIZE)
    {
        a++;
    }

    for (int i = 0; i < SIZE; i++)
        printf("%i", array_one[i]);
    printf("\n");

    //Define the size of the run
    printf("%i\n", a);

    //Divide the array into runs

    //Merge the runs

    //Adjust the run size

    //Continue merging

}



