#include <stdio.h>
#include <stdlib.h>

int main() {
    //cpc tag: decl inp alloc
    int n, sum = 0, *arr;
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    
    //cpc tag: decl loop inp arith
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    for (int i = 0; i < n; ++i) sum += arr[i];
    
    //cpc tag: out
    printf("%d", sum);
    return 0;
}