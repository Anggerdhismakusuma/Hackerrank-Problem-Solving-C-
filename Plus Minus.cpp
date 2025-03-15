#include <stdio.h>

int main(){
    int n;
    int arr[2009];
    scanf("%d", &n);
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    printf("%.6f\n%.6f\n%.6f", (float)pos / n, (float)neg / n, (float)zero / n);
    return 0;
}