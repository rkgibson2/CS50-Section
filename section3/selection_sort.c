#include <stdio.h>
#include <cs50.h>

#define ARR_SIZE 5

void sort(int array[], int n);

int main(int argc, string argv[])
{
    int unsorted[ARR_SIZE] = {5, 2, 4, 3, 1};

    // sort(unsorted, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
    {
	printf("%d\t", unsorted[i]);
    }

    printf("\n");
}

/**
 * Sorts array in place using selection sort
 */
void sort(int array[], int length)
{

}
