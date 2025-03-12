#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int num;
            scanf("%d", &num);
            if (i == j) sum1 += num;
            if (i + j == n - 1) sum2 += num;
        }
    }
    printf("%d", abs(sum1 - sum2));
    return 0;
}