#include <stdio.h>

int main(){
    int n, g;
    scanf("%d", &n);
    while (n--){
        scanf("%d", &g);
        if (g < 38 || g % 5 < 3) printf("%d\n", g);
        else printf("%d\n", g + 5 - g % 5);
    }
    return 0;
}