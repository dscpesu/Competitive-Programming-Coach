#include <stdio.h>

int main()  {
    int range = 47854;

    printf("enter the range to generate primes from : ");
    //scanf("%d", &range);
    
    for (int i=2; i <= range; i++)   {
        int test=0;
        for (int j=1; j < i; j++)   {
            if (i % j == 0)
                test++;
        }
        //if (test == 1) printf("%d\n", i);
    }

    return 0;
}