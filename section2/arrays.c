#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int array1[3] = {1, 2, 3};
    int array2[3] = {0};
    int array3[] = {3, 2, 1};

    for (int i = 0; i < 3; i++)
    {
	    printf("array1[%i] = %i\n", i, array1[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
	    printf("array2[%i] = %i\n", i, array2[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
	    printf("array3[%i] = %i\n", i, array3[i]);
    }
}
