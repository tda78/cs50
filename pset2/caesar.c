#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc!=2) return 1;
    int key = atoi(argv[1]);
    printf("Введите текст:\n");
    string text = get_string();
    int textCount = strlen(text);
    char c;

    for(int i = 0; i < textCount; i++)
    {
        c = text[i];
        if ( (c >= 'A') && (c <= 'Z')) c = (c - 'A' + key) % 26 + 'A';
        if ( (c >= 'a') && (c <= 'z')) c = (c - 'a' + key) % 26 + 'a';
        printf("%c", c);
    }
   printf("\n");
}