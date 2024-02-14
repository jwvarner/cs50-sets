#include <stdio.h>
#include <stdlib.h>

int array_new[10] = { 107, 27, 135, 71, 23, 32, 189, 132, 138, 45 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void)
{
    qsort(array_new, 10, sizeof(int), cmpfunc);

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", array_new[i]);
    }
    printf("\n");
    return 0;
}
//jokes, not an algorithm example--but found it while reading through libraries!