/*
Main problem: I don't understand the problem

take input of an amount and store it

take inpout of letters and preserve their case

increment letters by case by inputted value
    in a fixed dataset



*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int is_mod(int numIn);
int is_key_value(int character, int rotate_by);
int calc_char(int raw_character); 

int main(void)
{
    int alphaBIG[] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 85, 85, 88, 89, 90 };
    int alphaSML[] = { 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 123, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122 };
    int key = 10;
    char plaintext[] = "Hi! My name Is Josh";
    int cyphertext[] = {};

    int i, a, val = 0;
    while (i < strlen(plaintext))
    {
        if (plaintext[i] >= 65 && plaintext[i] <= 90)
        {
            cyphertext[i]=is_key_value(calc_char(plaintext[i]), is_mod(key));
            i++;
        }
        else if (plaintext[i] >= 97 && plaintext[i] <= 122)
        {
            cyphertext[i]=is_key_value(calc_char(plaintext[i]), is_mod(key));
            i++;
        }
        else
        {
            plaintext[i]=cyphertext[i];
            i++;
        }   
    }
    
    return 0;
}

int is_mod(int numIn)
{
    int a = numIn % 26;
    return a;
}

int calc_char(int raw_character)
{
    int b = 0;
    if (raw_character >= 65 && raw_character <= 90)
        b = raw_character + b;
    else if (raw_character >= 97 && raw_character <= 122)
        b = raw_character + b;
    return b;
}

int is_key_value(int character, int rotate_by)
{
    int a;
    if (character >= 65 && character <= 90)
        a = (character + rotate_by);
        if (a > 90)
        {
            a = a - 26;
        }
    else if (character >= 97 && character <= 122)
        a = (character + rotate_by);
        if (a > 122)
        {
            a = a - 26;
        }
    return a;
}