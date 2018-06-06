#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Give the value of a:");
    scanf("%d", &a);
    printf("Give the value of b:");
    scanf("%d", &b);
    printf("Give the value of c:");
    scanf("%d", &c);
    sum = a + b + c;
    printf("The sum of a, b and c is: %d\n", sum);
    return 0;
}
