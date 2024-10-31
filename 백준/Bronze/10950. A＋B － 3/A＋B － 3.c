#include <stdio.h>
int main(void) {
    int n, a, b;
    int i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d %d", &a, &b);
        int sum;
        sum = a+b;
        printf("%d\n", sum);
        i++;
    }
    return 0;
}