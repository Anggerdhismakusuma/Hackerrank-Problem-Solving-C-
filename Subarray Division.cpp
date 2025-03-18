#include <stdio.h>

int main(){
    int n, d, m;
    int squares[100];
    int count = 0;
    int sum = 0;
    int result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &squares[i]);
    scanf("%d %d", &d, &m);
    for (int i = 0; i < m; i++) sum += squares[i];
    if (sum == d) result++;
    for (int i = m; i < n; i++){
        sum += squares[i] - squares[i - m];
        if (sum == d) result++;
    }
    printf("%d", result);
    return 0;
}