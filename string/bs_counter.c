#include <stdio.h>

int main(void)
{
    int c , blanks , tabs , newlines;
    while((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '\b':
                ++blanks;
                break;
        
        
            case '\t':
                ++tabs;
                break;

            case '\n':
                ++newlines;
                break;

        
        default:
            break;
        }
    }

    printf("NewLines: %i --- Tabs: %i --- Blanks: %i",newlines,tabs,blanks);
}