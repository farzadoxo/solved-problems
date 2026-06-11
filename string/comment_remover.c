#include <stdio.h>

#define IN 1
#define OUT 0

// python comment remover

int main()
{
    int state,c;
    state = OUT;
    while((c = getchar()) != EOF)
    {
        if(c == '#')
        {
            state = IN;
        }

        if(state == 1)
        {
            if(c == '\n')
            {
                state = OUT;
            }
        }
        else
        {
            putchar(c);
        }

    }
}