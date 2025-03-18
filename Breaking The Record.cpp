#include <stdio.h>

int main(){
    int n;
    int scores[1000];
    int max, min;
    int max_count = 0, min_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &scores[i]);
    max = min = scores[0];
    for (int i = 1; i < n; i++){
        if (scores[i] > max){
            max = scores[i];
            max_count++;
        }
        if (scores[i] < min){
            min = scores[i];
            min_count++;
        }
    }
    printf("%d %d", max_count, min_count);
    return 0;
}