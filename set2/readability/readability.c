/*

break this down with pseudocode:
    ask for string
    store string
        take input 
        put into array (char[])
    count number of words in string
        read a string
        for every ' '
            increase space counter
    count number of letters
        read a string
        for every character that is 65-90 && 97-122
            increase letter counter
    count number of sentences
        read a string 
        for every '.' 
            increase sentence counter
    Do math
        words / 100
        letters over (words/100)
        sentences over (words/100)
        index = 0.0588 * L - 0.296 * S - 15.8
    Display information
        print out levels per index

what do you know how to do? Start with what you don't

Code something that compiles

*/
#include <math.h>
#include <string.h>
#include <stdio.h>
#define FIRST 0.0588
#define LETTERS 0.296
#define SENTENCE 15.8
#define MAXCHAR 1000

float count_words(char *text);
float count_letters(char *text);
float count_sentences(char *text);
float reading_level(float index);

int main(void)
{
    float index;
    char z[MAXCHAR];
    printf("Add some text: ");
    fgets(z, MAXCHAR, stdin);
    index = (FIRST * ((count_letters(z)/count_words(z)) *100)) - (LETTERS * ((count_sentences(z)/count_words(z)) * 100)) - SENTENCE;
    reading_level(index);
}

float count_words(char *text)
{
    int i = 0;
    int a = 1;
    while (i < strlen(text))
    {
        if (text[i] == ' ')
            a++;
        i++;
    }
    return a;
}

float count_letters(char *text)
{
    int i = 0; 
    int b = 0;
    while (i < strlen(text))
    {
        if (text[i] >= 65 && text[i] <= 90)
            b++;
        else if (text[i] >= 97 && text[i] <= 122)
            b++;
        i++;
    }
    return b;
}

float count_sentences(char *text)
{
    int i = 0; 
    int c = 0;
    while (i < strlen(text))
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            c++;
        i++;
    }
    return c;
}

float reading_level(float index)
{
    float z = round(index);

    if (z < 1)
    {
        printf("Your reading level is below Grade 1\n");
    }
    if (z == 1 || z <= 16)
    {
        printf("Your reading level is at Grade: %g\n", z);
    }
    else if ( z > 16)
    {
        printf("Your reading level is Grade: 16+\n");
    }
    return 0;
}