#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    FILE* outfile = fopen("names.txt", "w");
    if (outfile == NULL)
    {
        printf("fopen failed\n");
        return 1;
    }

    printf("Please enter a name (empty to finish input): ");
    string input = GetString();
    while (strcmp(input, "") != 0)
    {
        fputs(input, outfile);
        fputs("\n", outfile);
        printf("Please enter a name (empty to finish input): ");
        input = GetString();
    }

    fclose(outfile);
}
