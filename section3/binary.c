#include <stdio.h>
#include <cs50.h>

#define ARR_SIZE 5

bool search(int value, int values[], int n);

int main(int argc, string argv[])
{
    int search_for = 0;
    do
    {
	    printf("What should I search for?: ");
	    search_for = GetInt();
    } while (search_for < 0);

    int values[ARR_SIZE] = {1, 4, 8, 9, 17};

    bool is_there = search(search_for, values, ARR_SIZE);

    if (is_there)
    {
	    printf("%d is in the array\n", search_for);
    }
    else
    {
	    printf("%d is NOT in the array\n", search_for);
    }
}


/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // Set values for the top and the bottom of the search
    int lower = 0;
    int upper = n - 1;

    // Binary search
    while (lower <= upper)
    {
        int middle = (lower + upper) / 2;
        
        if (values[middle] == value)
        {
            return 1;
        }
        else if (values[middle] > value)
        {
            upper = middle - 1;
        }
        else if (values[middle] < value)
        {
            lower = middle + 1;
        }
    }
    
    return 0;
}
