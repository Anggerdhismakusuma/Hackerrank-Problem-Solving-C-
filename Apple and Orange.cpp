#include <stdio.h>

int main(){
    int s, t, a, b, m, n, d, x, y, i, c1 = 0, c2 = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++){
        scanf("%d", &d);
        x = a + d;
        if (x >= s && x <= t) c1++;
    }
    for (i = 0; i < n; i++){
        scanf("%d", &d);
        y = b + d;
        if (y >= s && y <= t) c2++;
    }
    printf("%d\n%d", c1, c2);
    return 0;
}