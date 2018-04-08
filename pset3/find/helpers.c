/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0;
    int max = n-1;
    int temp;

    while(max>=min)
    {
        temp = (max-min)/2 + min;

    //    printf ("temp: %i   value: ", temp);
      //  printf ("%i \n", values[temp]);

        if (values[temp] == value) return (true);
        else if (values[temp] > value) max = temp;
        else min = temp+1;
    }
    return false;

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
     int changed;
    do
    {
        changed = 0;
        for(int i = 0, temp; i<n; i++)
        {
            if (  values[i] >  values[i+1] )
            {
                temp =  values[i];
                values[i] =  values[i+1];
                values[i+1] = temp;
                changed = 1;
            }
        }
    }
    while (changed == 1);

  //  for(int i = 0; i < n; i++) printf ("%i \n", values[i]);
    return;
}