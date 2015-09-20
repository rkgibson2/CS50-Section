#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Improper usage\n");
        return 1;
    }

    int x = atoi(argv[1]);

    printf("%i\n", x);

    return 0;
}
