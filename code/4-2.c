#include <stdio.h>

int main()
{
    char c = '*';
    for (int i=1; i<10; i++) {
        for (int j=1; j<10; j++) {
            printf("%d %c %d\n", i, c, j);
        }
    }

    return 0;
}
