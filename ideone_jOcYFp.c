#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Lab num two\n");

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    int d = b * b - 4 * a * c;
    printf("D = %d", d);

    if (d < 0) {
      printf(" (null, d < 0)\n");
    } else if (d == 0) {
      printf(" (one root)\n");
    } else {
      printf(" (two roots)\n");
    }

    return 0;
}