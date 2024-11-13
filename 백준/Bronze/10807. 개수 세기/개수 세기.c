#include <stdio.h>

int main(void) {
    int n, v, count = 0; 
    scanf("%d", &n); 

    int list[n]; 
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < n; i++) {
        if (list[i] == v) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
