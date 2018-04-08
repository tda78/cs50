#include <stdio.h>

int main(void)
{
    int arr[] = {3, 6, 7, 8, 9, 3, 6, 4, 8, 2, 7, 4, 6, 3, 4, 12, 1};
    int size = sizeof(arr)/sizeof(int);
    int changed;
    do
    {
        changed = 0;
        for(int i = 0, temp; i<(size-1); i++)
        {
            if ( arr[i] > arr[i+1] )
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                changed = 1;
            }
        }
    }
    while (changed == 1);

    for(int i = 0; i<size; i++)
        printf ("%i ", arr[i]);
    return(0);
}