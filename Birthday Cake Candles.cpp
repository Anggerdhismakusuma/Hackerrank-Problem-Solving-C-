#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] > max){
            max = arr[i];
            count = 1;
        } else if (arr[i] == max){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}