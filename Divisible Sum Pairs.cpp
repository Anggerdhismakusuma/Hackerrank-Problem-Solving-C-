#include <stdio.h>

int main(){
    int n, k;
    int numbers[100];
    int count = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &numbers[i]);
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if ((numbers[i] + numbers[j]) % k == 0) count++;
        }
    }
    printf("%d", count);
    return 0;
}