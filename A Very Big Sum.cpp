#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    for (int i = 0; i < n; i++){
        long long int num;
        scanf("%lld", &num);
        sum += num;
    }
    printf("%lld", sum);
}