#include <stdio.h>

// prototypes
void scope1(void);
void scope2(void);

int main(void)
{
    scope1();
    scope2();
}

// scope decided by parantheses
void scope1(void)
{
    if (1)
    {
        int a = 4;
        (void) a; // have to do this to compile w/out warning "unused variable"
    }

    if (1)
    {
        int a = 5;
        printf("%i\n", a); // what will this print?
    }
}

// scope decided by priority
void scope2(void)
{
    int a = 4;

    if (1) {
        int a = 0;
        printf("%i\n", a); // what will this print?
    }

    printf("%i\n", a);
}
