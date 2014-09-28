#include <stdio.h>
#include <cs50.h>
#include <string.h>

void print_string(string input);

int main(void)
{
    string name = "Hello, World!";

    print_string(name);
    
    return 0;
}

void print_string(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        printf("%c\n", input[i]);
    }
    
    return;
}
