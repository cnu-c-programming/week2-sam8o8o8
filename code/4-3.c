#include <stdio.h>

int main()
{
    int n;
    int isTrue = 1;
    scanf("%d", &n);

    if (n <= 1) {
        isTrue = 0;
    } else {
        for (int i=2; i<n; i++) {
            if (n % i == 0) {
                isTrue = 0;
                break;
            }
        }
    }

    if (isTrue == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
