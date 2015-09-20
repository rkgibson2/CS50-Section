#include <stdio.h>

int main(void)
{
    int array[6] = {3, 7, 12, 2, 6, 10};

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum: %i\n", sum);
}