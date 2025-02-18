#include <stdio.h>

int sum(int a, int b) {
    c=a+b;
    return c;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", sum(num1, num2));
    return 0;
}
