/*
cs 50 walkthrough:
prompt for input int heigh 1-8
get int , no cs40.h do manual validation
verify int is correct format (do while)
build pyramid
    print spaces
    print left hashes
    print gap
    print right hashes
personal notes from walk through:
top most space is related to number of hashes
1 height: 1 space, 1 hash, fixed 1 space, fixed 1 space, 1 hash
2 height: 2 space, 2 hash, fixed 1 space, fixed 1 space, 2 hash
etc...
why?

I've created two loops and can make a diagonal line of a variable size
I cannot keep hashed in the new line I am calling.

Next day, watching section.

23:23 of section, executed mario basic (have not covered the problem yet)

Will accept the this and move to next set.

not a win.
*/ 
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str_main[9] = { ' ',' ',' ',' ',' ',' ',' ',' ','\0'};
    char str_reversed[8];
    int height;
    int i;
    int j;
    char space = ' ';
    char hash = '#';
    do
    {
        /* code */
        printf("Height: ");
        scanf("%i",&height);
        i++;
    
    } while (height <= 1 || height >= 8);
    
    for(i = 0; i < height; i++)
    {
        str_main[(height-i)-1]=hash;
        printf("%s\n",str_main);
    }    
}