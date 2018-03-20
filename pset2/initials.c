#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Input your name:\n");
    string name = get_string();
    char c = name[0];
    if ( c >= 'a' && c <='z')
        c = c + ('A'-'a');
    printf("%c",c);
    for(int i=1, n = strlen(name); i<n; i++ )
        if (name[i-1]==' ')
        {
            c = name[i];
            if ( c >= 'a' && c <='z')
                c = c + ('A'-'a');
            printf("%c",c);
        }
    printf("\n");
}