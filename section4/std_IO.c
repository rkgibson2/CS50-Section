#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    string input = GetString();
    while (strcmp(input, "") != 0)
    {
	printf("%s\n", input);
	input = GetString();
    } 
}
