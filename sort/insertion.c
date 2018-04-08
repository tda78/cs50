#include <stdio.h>


int main(void)
{
    int array[] = {9,5,7,4,2,3,1,3434,4,32324,2342,234,432,23,34,2,3,4,5};
    int size = sizeof(array)/sizeof(int);

    for (int i = 1, element, j ; i<size; i++)
    {
        element = array[i];
        j=i;
        while( (j > 0) && (array[j-1] > element))
        {
            array[j] = array[j-1];
            j--;
        }
        array[j]=element;
    }
    for (int i = 0; i < size; i++)
    printf("%i ",array[i]);
}