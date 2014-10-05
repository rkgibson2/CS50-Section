#include <stdio.h>

int main(int argc, char* argv[])
{
    int x = 2, y = 3, z = 5;

    int* x_ptr = &x;
    int* y_ptr = &y;
    int* z_ptr = &z;

    printf("x == %d, y == %d, z == %d\n", x, y, z);
    printf("x_ptr == %p\n", x_ptr);
    printf("y_ptr == %p\n", y_ptr);
    printf("z_ptr == %p\n", z_ptr);

    printf("The address of x is %p\n", x_ptr);
    printf("The value stored in %p is %d\n", x_ptr, *x_ptr);

    printf("\nThe value stored in y, %p, is %d\n", y_ptr, y);
    printf("Doing '*y_ptr = x * z'\n");
    *y_ptr = x * z;
    printf("The value stored in y, %p, is %d\n", y_ptr, y);

    printf("\nx == %d\n", x);
    printf("Doing 'x = (*y_ptr) * (*z_ptr)'\n");
    x = (*y_ptr) * (*x_ptr);
    printf("Now x == %d\n", x);

    printf("\nz == %d\n", z);
    printf("Doing 'z = *x_ptr'\n");
    z = *x_ptr;
    printf("Now, z == %d\n", z);

    printf("\nz_ptr == %p, the value there is %d\n", z_ptr, *z_ptr);
    printf("Doing 'z_ptr = y_ptr'\n");
    z_ptr = y_ptr;
    printf("Now, z_ptr == %p, the value there is %d\n", z_ptr, *z_ptr);
}
