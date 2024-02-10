/*
Notes while watching lecture:

Know your types, decide what type you want, and code accordingly
use functions
when you clearly define the problem and what the solution ought to look like 
    you've done the majority of the work
use the debuggger to step through your code
Verbing N units == use a function

***Note while coding, I found a C text book and reference the types and handling of those types when in doubt
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int new_word(char)

int main(void)
{
    char Alphabet[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    int Code[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4 , 10, };
    //Prompt user
    //take prompt
    //promt user
    //take prompt
    //convert prompt
    //convert prompt
    //compare prompts
    //print output
    //-------
    /*
        what do I know how to do?
            prompt user
            take prompt
            compare prompts (if x == x, print; else...)
            print output
        what do I not know how to do?
            convert prompt
        what should be a function?
            prompt user -- output: stored prompt, string
            convert prompt -- output: converted prompt as integer
            compare prompts -- output: result, string
    */
    char = new_word(input);

    int convert = (int) c;
    for(int i = 0; i < 26; i++)
    {
        if(convert == Alphabet[i])
        {
            printf("%i",Code[i]);
        }
    }
    int new_word(char)
    {
        char c;
        printf("Enter a letter: ");
        scanf("%c", c);
        //ask and take input from a user
        return 3;
    }
    /*iint convert(arg)
    {
        //take new word and convert it
        return 2;
    }
    int compare(arg, arg2)
    {
        //compare two values and return a statement
        return 1;
    }*/

}