
#include <stdio.h>

int func3(int a, int b);

int func3(int a, int b)
{
    if (a >= b) {
        return a - b;
    } else {
        return b - a;
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", func3(10, n));

    return 0;
}
