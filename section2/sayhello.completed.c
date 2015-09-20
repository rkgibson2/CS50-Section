#include <stdio.h>
#include <cs50.h>
#include <string.h>

int add(int x, int y);
void sayhello(string name);

int main(int argc, string argv[])
{
    printf("Please enter your name: ");
    string yourName = GetString();

    // TODO
    // this function isn't defined yet!!
    sayhello(yourName);

    int y = 5
    int ans = add(y);
    printf("ans = %i\n", ans);

    return 0;
}

int add(int x)
{
    int y = 3;
    return x + y;
}

void sayhello(string name)
{
    printf("Hello, %s\n", name);
}
