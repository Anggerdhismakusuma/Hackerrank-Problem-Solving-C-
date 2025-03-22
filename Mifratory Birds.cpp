#include <stdio.h>

int main(){
    int n;
    int birds[5] = {0, 0, 0, 0, 0};
    int max = 0;
    int maxIndex = 0;
    int bird;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &bird);
        birds[bird - 1]++;
    }
    for (int i = 0; i < 5; i++){
        if (birds[i] > max){
            max = birds[i];
            maxIndex = i;
        }
    }
    printf("%d", maxIndex + 1);
    return 0;
}