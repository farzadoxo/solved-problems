#include <stdio.h>
#include <string.h>


int main(void)
{
    int c;
    int count = 0;
    int max = 0;
    while((c = getchar()) != EOF)
    {
        
        if(c != '\n')
        {
            count ++;
                
        }
        else
        {
            if(count > max)
            {
                max = count;
                count = 0;
            }
        }
    }

    printf("%i\n",max);
    putchar(c);
}