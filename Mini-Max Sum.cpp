#include <stdio.h>

int main(){
    long long int arr[5];
    long long int sum = 0;
    long long int min = 1000000000;
    long long int max = 0;
    for (int i = 0; i < 5; i++){
        scanf("%lld", &arr[i]);
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}