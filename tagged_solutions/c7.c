#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //cpc tag: decl inp
    int test_cases;
    scanf("%d", &test_cases);
    
    //cpc tag: decl loop inp arith
    for (int i = 0; i < test_cases; ++i)    {
        int nump, rs=0, bs=0, t1, t2;
        scanf("%d", &nump);
        for (int j = 0; j < nump; ++j)  {
            scanf("%d", &t1);
            rs += t1;
        }
        for (int k = 0; k < nump; ++k)  {
            scanf("%d", &t2);
            bs += t2;
        }

        //cpc tag: check out
        (rs == bs) ? printf("Tie\n") : (rs > bs) ? printf("Red\n") : printf("Blue\n");
    }
    return 0;
}