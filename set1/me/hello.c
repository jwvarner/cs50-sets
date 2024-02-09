#include <stdio.h>

int main(void)
{
    char myNum[30];
    printf("What's your name? ");
    scanf("%s", myNum);
    printf("hello, %s \n", myNum);
}