#include <stdio.h>

int main()
{
    int x, y;
    char operator;

    scanf("%d %d %c", &x, &y, &operator);

    if (operator == '+') {
        printf("%d", x + y);
    } else if (operator == '-') {
        printf("%d", x - y);
    } else if (operator == '*') {
        printf("%d", x * y);
    } else if (operator == '/') {
        if (y == 0) {
            printf("0으로 나눌 수 없음");
        } else {
            printf("%d", x / y);
        }
    } else {
        printf("올바른 연산자를 입력하세요");
    }

    return 0;
}
