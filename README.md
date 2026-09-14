#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("sum=%d\n", a + b);
    printf("Difference=%d\n", a - b);
    printf("product=%d\n", a * b);

    return 0;
}
