#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int h = get_int();
    for(int i=0 ; i<h; i++)
    {
        int j;
        for(j = h-i; j>0; j--)
        {
            printf(" ");
        }
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("##\n");
    }

}