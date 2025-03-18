#include <stdio.h>

int main(){
    int n, m, a[100], b[100], i, j, count = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < m; i++) scanf("%d", &b[i]);
    for (i = a[n - 1]; i <= b[0]; i++){
        for (j = 0; j < n; j++) if (i % a[j] != 0) break;
        if (j == n){
            for (j = 0; j < m; j++) if (b[j] % i != 0) break;
            if (j == m) count++;
        }
    }
    printf("%d", count);
    return 0;
}