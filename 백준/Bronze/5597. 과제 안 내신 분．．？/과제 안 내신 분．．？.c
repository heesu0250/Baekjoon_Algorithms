#include <stdio.h>
int main(void) {
    int student[31] = { 0 };
    int id;

    for (int i = 0; i < 28; i++) {  
        scanf("%d", &id);  
        student[id] = id;
    }
    for (int i = 1; i < 31; i++) {
        if (student[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}