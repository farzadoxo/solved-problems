#include <stdio.h>

int main(void)
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            printf("\n");
        }
        else
            putchar(c);
    }
}