#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    int j = 0;
    char first_word[16];
    char second_word[16];
    int sum1;
    int sum2;
    int alphabet[] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 85, 85, 88, 89, 90 };
    int Code[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4 , 10, };
    
    printf("What is the first word? ");
    scanf("%s", first_word);
    printf("What is the second word? ");
    scanf("%s", second_word);
    
    while (i < strlen(first_word))
    {
        sum1 = sum1 + Code[i];
        i++;
    }
    printf("%d\n", sum1);

    while (j < strlen(second_word))
    {
        sum2 = sum2 + Code[j];
        j++;
    }
    printf("%d\n", sum2);

    if (sum1 == sum2)
    {
        printf("TIED!\n");
    }
    else if (sum1 <= sum2)
    {
        printf("Second word WON!\n");
    }
    else
    {
        printf("First word WON!\n");
    }
}