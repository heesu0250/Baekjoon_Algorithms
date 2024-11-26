#include <stdio.h>
int main(void) {
    int n;
    int score[1000]={0};
    int max_score=0;
    float sum=0, avg=0;
    scanf("%d", &n);
    for (int i=0; i < n; i++) {
        scanf("%d", &score[i]);
        if (max_score < score[i])
            max_score = score[i];
    }
    for (int i=0; i < n; i++)
        sum += (float)score[i]/max_score*100;
    avg = sum / n;
    printf("%f", avg);
    return 0;
}