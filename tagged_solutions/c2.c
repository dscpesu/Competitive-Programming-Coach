#include <stdio.h>
#include <stdlib.h>

int main()
{
    //cpc tag: decl
    int num, *arr, i;

    //cpc tag: inp
    scanf("%d", &num);
    
    //cpc tag: alloc
    arr = (int*) malloc(num * sizeof(int));
    
    //cpc tag: decl loop inp
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);

    //cpc tag \: loop ptr arith check
    int *arr_st = arr, *arr_end = arr + (num - 1);
    for(int temp; (arr_st - arr) < num/2; ++arr_st, --arr_end)  {
        temp = *arr_st;
        *arr_st = *arr_end;
        *arr_end = temp;
    }

    //cpc tag: decl out
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}