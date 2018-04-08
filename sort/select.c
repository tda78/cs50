#include <stdio.h>


int main(void)
{
    int array[] = {2,5,7,4,2,3,1,3434,4,32324,2342,234,432,23,34,2,3,4,5};
    int size = sizeof(array)/sizeof(int);

    for (int i = 0, temp, min; i<size; i++)
    {
        min = i;
        for (int j=i; j<size; j++)
            if (array[j]<array[min]) min =j;
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;

        printf("%i ",array[i]);
    }

    //printf("%i ", i);
}