#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

bool isAlpha(char symbol);
int charToNumber (char symbol);
char coding(char uncoded, int key);

int main (int argc, string argv[])
{
    bool inputError = false;
    if (argc!=2) return(1);

    int keyCount = strlen(argv[1]);
    string key = argv[1];

    char c;
    int intKey[keyCount];
    for (int i = 0; i<keyCount; i++)
    {
        c = key[i];
        if (!isAlpha(c))
        {
            inputError = true;
            return(1);
        }
        intKey[i] = charToNumber(c);
    }
    if (inputError)  return (1);

    printf("Введите строку: ");
    string text = get_string();
    int textCount = strlen(text);
    int codedCount = 0;;

    printf("ciphertext: ");
    for (int i = 0; i < textCount; i++)
    {
       char tempChar = text[i];
       if (isAlpha(tempChar))
       {
           tempChar = coding(tempChar,intKey[codedCount%keyCount]);
           codedCount++;
       }
       printf("%c",tempChar);
    }
    printf("\n");

}


bool isAlpha (char symbol)
{
    if ((symbol<='z') && (symbol>='a')) return (true);
    if ((symbol<='Z') && (symbol>='A')) return (true);
    return (false);
}

int charToNumber (char symbol)
{
    if ((symbol<='z') && (symbol>='a')) return (symbol - 'a');
    if ((symbol<='Z') && (symbol>='A')) return (symbol - 'A');
    return 50;
}

char coding(char uncoded, int key)
{
    if ((uncoded<='z') && (uncoded>='a')) return ((uncoded - 'a' + key) % 26 +'a');
    if ((uncoded<='Z') && (uncoded>='A')) return ((uncoded - 'A' + key) % 26 +'A');
    return('x');
}