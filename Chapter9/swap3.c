#include <stdio.h>
void interchage(int *u, int *v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchage(&x)
}
